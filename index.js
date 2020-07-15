const { app, BrowserWindow } = require ('electron');
const path = require('path');
const url = require('url');

let win;

function createWindow(){
    win = new BrowserWindow({
        width:1000,
        height:600,
        frame: false,
        webPreferences: {
            nodeIntegration: true,
            enableRemoteModule: true
        }
    });

    win.openDevTools();

    win.loadURL(url.format({
        pathname: path.join(__dirname, 'index.html'),
        protocol: 'file:',
        slashes: true
    }));

    win.webContents.on('new-window', function(e, url) {
        logData("stop popup", e)
        logData("stop popup", url)
        e.preventDefault();
      });
      
}

app.on('ready', createWindow);

app.on('window-all-closed', () => {
    if(process.platform !== 'darwin'){
        app.quit();
    }
});