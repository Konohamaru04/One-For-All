const { remote } = require('electron');
const $ = require('jquery');
var win = remote.getCurrentWindow();

$('#minimize').click(function(){    
    win.minimize();
});

$('#maximize').click(function(){
    if(!win.isMaximized()){
        win.maximize();
    }
    else{
        win.unmaximize();
    }
});

$('#close').click(function(){
    win.close();
});


