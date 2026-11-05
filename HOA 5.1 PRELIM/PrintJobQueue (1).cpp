#include <iostream>
#include <string>

//Create a class
class Job {
public:
    int jobID;
    std::string userName;
    int numPages;

    // Constructors
    Job() : jobID(0), userName(""), numPages(0) {}
    Job(int id, std::string name, int pages) : jobID(id), userName(name), numPages(pages) {}
};
// A Node class to hold the Job data and the pointer for our linked list queue
class Node {
public:
    Job data;
    Node* next;

    Node(Job j) : data(j), next(nullptr) {}
};
//Create another class called Printer
class Printer {
private:
    Node* front; // Points to the front of the queue (next to be printed)
    Node* rear;  // Points to the back of the queue (newly added jobs)

public:
    Printer() : front(nullptr), rear(nullptr) {}
    // Method to add new jobs to the queue
    void addJob(int id, std::string name, int pages) {
        Job newJob(id, name, pages);
        Node* newNode = new Node(newJob);

        // If the queue is empty, the new job is both the front and the rear
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            // Otherwise, add to the back and update the rear pointer
            rear->next = newNode;
            rear = newNode;
        }
        std::cout << "System: Added Job ID " << id << " submitted by " << name << " (" << pages << " pages) to the queue.\n";
    }
    // Process all jobs using a first come, first served strategy
    void processJobs() {
        if (front == nullptr) {
            std::cout << "The printer queue is currently empty.\n";
            return;
        }
        std::cout << "\n--- Waking up printer... Processing queue ---\n";
        
        // Loop until all jobs are processed
        while (front != nullptr) {
            Node* temp = front;
            // Simulate processing the job
            std::cout << "[PRINTING] Job ID: " << temp->data.jobID 
                 << " | User: " << temp->data.userName 
                 << " | Pages: " << temp->data.numPages << "...\n";

            // Move the front pointer to the next job in line
            front = front->next;
            // If the queue becomes empty after dequeueing, reset rear to nullptr
            if (front == nullptr) {
                rear = nullptr; 
            }
            // Free the memory
            delete temp;
        }
        std::cout << "All pending jobs have been successfully processed.";
    }
};
int main() {
    Printer officePrinter;
    // Step 4: Simulate a scenario where multiple people are adding jobs
    std::cout << "Employees sending print requests \n";
    officePrinter.addJob(1001, "Clint", 5);
    officePrinter.addJob(1002, "John", 12);
    officePrinter.addJob(1003, "Evelyn", 1);
    officePrinter.addJob(1004, "Lucia", 45);

    // The printer processes them one by one
    officePrinter.processJobs();

    return 0;
}