import os
import sys
from typing import Dict, List

week = sys.argv[1]
file = sys.argv[2]
basePath = f"../{week}/code/{file}"

def getCodeList(path: str) -> Dict[str, str]:
    targetList = sorted(
        filter(lambda fileName: ".c" in fileName, os.listdir(path)), 
        key=lambda name: int(name.split('_')[0])
    )
    codeDict = {}
    for code in targetList:
        f = open(f"{path}/{code}", "r")
        codeDict[code] = f.read().strip()
    return codeDict

if __name__ == "__main__":
    codeDict = getCodeList(basePath)

    with open(f"../{week}/{file}_20222975_송지호.c", "w") as f:
        for name, code in codeDict.items():
            f.write(f"/* {name}\n")
            f.write(code)
            f.write("\n*/\n\n")