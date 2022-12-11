#!/usr/bin/python3
''' Function to unlock boxes'''


def canUnlockAll(boxes):
    keys = [0]
    for i in keys:
        for j in boxes[i]:
            if j not in keys and j < len(boxes):
                keys.append(j)
    return len(keys) == len(boxes)
