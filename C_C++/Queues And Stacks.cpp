

public class Solution {
	
	Stack<Character> stack = new Stack<Character>();
	Queue<Character> queue = new LinkedList<Character>();

	void pushCharacter(char ch) {
		stack.push(ch);
	}

	void enqueueCharacter(char ch) {
		queue.offer(ch);
	}

	char popCharacter() {
		return stack.pop();
	}

	char dequeueCharacter() {
		return queue.poll();
	}

	