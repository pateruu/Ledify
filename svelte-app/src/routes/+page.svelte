<script>
    let logoPath = "/ledify-logo.png"; //path from static folder.
</script>

<main>
    <ul class="navbar">
      <li><a href='/info'>Info</a></li>
      <li><a href='/setup'>Setup</a></li>
      <li><a href='/main-ui'>Main UI</a></li>
      <li><a href='/colour-buttons'>Colour Buttons</a></li>
      <li><a href='/animations'>Animations</a></li>
    </ul>

    <h1 class="title">Welcome to LEDify</h1>

    <div class="logo-container">
        <img src={logoPath} alt="LEDify Logo" class="logo"/>
    </div>

    <h2 class="main-page-statement">Transform your space with vibrant, effortless LED control.</h2>

</main>
    
<style>

    :global(body){
        background-color: #2c2c2c;
        font-family: Arial, Helvetica, sans-serif;
        color: white;
        margin: 0;
    }
    
    .title{
        text-align: center;
        font-size: 4rem;
        margin-top: 70px;
        font-family: Baskerville;
    }

    .main-page-statement{
        text-align: center;
        font-size: 2rem;
        margin-top: 0px;
        font-family: Baskerville;

    }

    /* Styles for Navigation Bar */
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

    /*Styles for Logo Image */
    .logo{
        max-width: 460px;
        border-radius: 20%;
        margin-top: -20px;

    }

    .logo-container{
        display: flex;
        justify-content: center;
        margin: 50px 0;

    }
</style>