if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    for x in student_marks:
        if x==query_name:
            print("{:.2f}".format(sum(student_marks[x])/len(student_marks[x])))
