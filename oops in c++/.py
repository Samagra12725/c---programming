# Quiz Game Project

# Importing required modules
import random

# Quiz data
quiz_data = {
    "What is the capital of Andra pradesh?": {
        "A": "Hyderabad",
        "B": "Amravati",
        "C": "Vishakapatnam",
        "D": "chennai",
        "correct": "B"
    },
    "What is the capital of Arunachal Pradesh?": {
        "A": "Itanagar",
        "B": "Guwahati",
        "C": "Imphal",
        "D": "Shilong",
        "correct": "A"
    },
    "What is the capital of Assam?": {
        "A": "Dishpur",
        "B": "Guwahati",
        "C": "Silchar",
        "D": "Jorhat",
        "correct": "A"
    },
    "What is the capital of Bihar?": {
        "A": "ranchi",
        "B": "Patna",
        "C": "Bilaspur",
        "D": "Raipur",
        "correct": "B"
    },
    "What is the capital of Gujarat?": {
        "A": "Surat",
        "B": "Gandhinagar",
        "C": "Vadodara",
        "D": "Surat",
        "correct": "B"
    }
}

def quiz_game():
    score = 0
    questions = list(quiz_data.keys())
    random.shuffle(questions)

    for question in questions:
        print(f"\nQuestion: {question}")
        options = quiz_data[question]
        for option, value in options.items():
            if option != "correct":
                print(f"{option}: {value}")

        answer = input("\nEnter your answer (A/B/C/D): ")
        if answer.upper() == options["correct"]:
            print("Correct!")
            score += 1
        else:
            print(f"Incorrect. The correct answer was {options['correct']}.")

    print(f"\nQuiz finished! Your final score is {score}/{len(questions)}.")

if __name__ == "__main__":
    quiz_game()
