def is_perfect_melody(notes):
    for i in range(len(notes) - 1):
        interval = abs(notes[i] - notes[i + 1])
        if interval != 5 and interval != 7:
            return "NO"
    return "YES"
t = int(input())
results = []
for _ in range(t):
    n = int(input()) 
    notes = list(map(int, input().split()))  
    results.append(is_perfect_melody(notes)) 
for result in results:
    print(result)
