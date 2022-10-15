import os
import sys
from typing import Dict, List
import nbformat

week = sys.argv[1]
file = sys.argv[2]
basePath = f"../{week}/code/{file}"

def getCodeList(path: str) -> Dict[str, str]:
    targetList = sorted(
        filter(lambda fileName: '.c' in fileName, os.listdir(path)), 
        key=lambda name: int(name.split('_')[0])
    )
    codeDict = {}
    for code in targetList:
        f = open(f"{path}/{code}", "r")
        codeDict[code] = f.read().strip()
    return codeDict

def convertToCell(input: Dict[str, str]) -> List[nbformat.NotebookNode]:
    nodeList = []
    for name, code in input.items():
        nodeList.append(nbformat.v4.new_code_cell(f"%%writefile {name}\n{code}"))
        nodeList.append(nbformat.v4.new_code_cell(f"%%shell\ngcc ./{name}\n./a.out"))
    return nodeList

if __name__ == "__main__":
    codeList = getCodeList(basePath)

    notebook = nbformat.v4.new_notebook()
    notebook.cells = convertToCell(codeList)

    nbformat.write(notebook, f"../{week}/20222975_송지호_{file}.ipynb")
    print("[*] Done!")