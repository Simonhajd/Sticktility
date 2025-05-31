from datetime import datetime

with open("journal.md", "a") as file:
    file.write("\n#"+datetime.now().strftime("%B %d: ") + "\n")
    file.write("\n** Total time spent: **\n")