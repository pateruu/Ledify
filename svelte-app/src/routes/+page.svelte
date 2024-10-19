<script>
    let count = 0;
  
    function increment() {
      count += 1;
    }
  </script>
  
  <main>
    <h1>LEDify Control Panel</h1>
    <button on:click={increment}>Clicked {count} times</button>
  </main>
  
  <style>
    button {
      padding: 10px;
      background-color: #3498db;
      color: white;
      border: none;
      border-radius: 5px;
      cursor: pointer;
    }
  </style>
  