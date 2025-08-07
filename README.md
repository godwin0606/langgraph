This project demonstrates a simple chatbot implementation using LangGraph and LangChain with Perplexity AI's API.

## Overview
The chatbot uses a graph-based approach to handle conversations, utilizing LangGraph's StateGraph for managing conversation flow and Perplexity AI's language model for generating responses.

## Prerequisites
- Python 3.8+
- LangChain
- LangGraph
- Python-dotenv
- IPython (for notebook execution)

## Setup

1. Install required packages:
````bash
pip install langchain langgraph python-dotenv IPython langchain-openai
````

2. Create a .env file in your project root:
````plaintext
PERPLEXITY_API_KEY=your_api_key_here
````

## Project Structure

- Basic_chatbot.ipynb: Main Jupyter notebook containing the chatbot implementation
- .env: Environment variables file (contains API keys)

## Key Components

1. **State Management**
   - Uses TypedDict for defining conversation state
   - Implements message annotation for tracking conversation history

2. **Graph Structure**
   - START → llmchatbot → END
   - Single node implementation for basic conversation flow

3. **LLM Integration**
   - Uses Perplexity AI's API
   - Model: sonar-pro
   - Handles both human and AI messages

## Usage

1. Open the notebook in VS Code or Jupyter
2. Run all cells in sequence
3. Interact with the chatbot using:
````python
response = graph.invoke({
    "messages": [HumanMessage(content="your message here")]
})
````

## Features
- Graph-based conversation flow
- State management
- Message history tracking
- Human/AI message differentiation
- Streaming response capability

## Example Interaction
````python
# Basic interaction
response = graph.invoke({
    "messages": [HumanMessage(content="how are you")]
})
print(response["messages"][-1].content)
````

## Notes
- The chatbot maintains conversation context
- Supports both synchronous and streaming responses
- Visualizes conversation flow using Mermaid diagrams (when available)

## License
[Your License Here]
