# Code by taylor 
# "I think I had a dream about you" "Was I WA'ing on CCC Junior questions?" "No?" "Then it wasn't me."

# Basically convert the time into an integer then calculate the amount of minutes elasped during rush hour. These
# "rush hour minutes" have double the value
# time complexity should be O(1)

hour, minute = map(int, input().split(":"))

rush1 = range(7*60, 10*60) # Each value that corresponds to a minute during rush hour
rush2 = range(15*60, 19*60) 

current_time = hour*60 + minute # The starting time in minutes
gap = 0 # The "gap" meaning the gap between the starting time and expected ending time
i = 0 # Keeps track when 2 hours are up.

while (True):
    if (i == 120):
        break
    if (current_time+gap in rush1 or current_time+gap in rush2):
        gap += 2 # Rush hour minutes have double the value.
    else:
        gap += 1
    i += 1

new_time = current_time + gap
new_hour = (new_time // 60) % 24
new_minute = new_time % 60

# String manipulation to meet output requirements
if (new_minute < 10):
    new_minute = "0" + str(new_minute)
else:
    new_minute = str(new_minute)

if (new_hour < 10):
    new_hour = "0" + str(new_hour)
else:
    new_hour = str(new_hour)

print(new_hour + ":" + new_minute)