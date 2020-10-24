# -*- coding: utf-8 -*-

import pandas as pd
import json
import re
import math


def FixColumnHeading(column):
    # Separates the column name into a list
    columns = re.split(r'\.', column)    
    # Iterates through the column name
    for word in range(len(columns)):
        if(word > 0):
            # If it's not the first word in the name than capitalize it
            columns[word] = columns[word].capitalize()
    
    # New variable to hold the new column name
    newColumn = ''
    # Iterates through the list generated and adds the name to the empty string
    for part in columns:
        newColumn += part
    # Returns the new column name
    return newColumn


def FindVectorLength(x, y, z):
    # Uses Pythagoras to find the vector length
    result = math.sqrt((float(x)**2 + float(y)**2 + float(z)**2))
    return result

# Opens the json file and loads it imto a variable as a list of dictionaries
with open ("C:/Users/paulb/OneDrive/Documents/GitHub/FinalYearProject/Saved/testArray.json" , "r") as openfile:
    data = json.load(openfile)

# Normalised the JSON data to access the deeply nested data
normalisedData = pd.json_normalize(data)
# Fixes the column names so that they can be accessed later on
normalisedData.columns = normalisedData.columns.to_series().apply(lambda x: FixColumnHeading(x))

# Makes a new column that access the speed of the palm
normalisedData['Speed'] = normalisedData.apply(lambda x: FindVectorLength(x.palmVelocityX, x.palmVelocityY, x.palmVelocityZ), axis = 1)

