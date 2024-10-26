<script>

</script>

<main>
  <ul class="navbar">
    <li><a href='/info'>Info</a></li>
    <li><a href='/setup'>Setup</a></li>
    <li><a href='/main-ui'>Main UI</a></li>
    <li><a href='/colour-buttons'>Colour Buttons</a></li>
    <li><a href='/animations'>Animations</a></li>
  </ul>

    <!-- This is where the content of individual pages will go -->
    <slot></slot>
</main>

<style>
  :global(body){
    background-color: #2c2c2c;
    font-family: Arial, Helvetica, sans-serif;
    color: white;
    margin: 0;
    }

  .navbar{
    display: flex;
    justify-content: space-around;
    background-color: #333;
    padding: 1rem;
    list-style-type: none;
  }
    
  .navbar li{
      margin: 0 10px;
  }

  .navbar li a {
    color: white;
    text-decoration: none;
  }

  .navbar li a:hover {
    color: #ccc;
  }
</style>

