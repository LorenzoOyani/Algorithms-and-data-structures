import math

raw_data = [56.2, float('NAN'), 51.7, 55.3, 52.5, float('NAN'), 47.8]
filtered_data = []
for value in raw_data:
    if not math.isnan(value):
        filtered_data.append(value)
