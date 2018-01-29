/*  
    File: fn_autoMessages.sqf  
    Author: BenjaminSansNom  

    Description:  
    Auto messages in game every X seconds  
*/  

[] spawn {  
    // Add a line in this array to add a message  
    _messages = [  
        "Visit our Website:<br/> <t color='#e32828' size='1.5'>www.elkoy.co.uk</t>",  
        "Join our TeamSpeak:<br/><t color='#e32828' size='1.5'>ts.elkoy.net</t>"  
    ];  

    _refreshTime = 300; // Time between each message (in seconds)  

    _i = 0;  
    while {true} do {  
        _count = count _messages;  
        _message = _messages select _i;  
        hint parseText format["<t color='#ffffff' size='2'>Elkoy</t><t color='#c45454' size='2'>Roleplay</t><br/><br/><img shadown='false' size='6' image='textures\billboard\ServerHeader.paa'/><br/><br/>%1", _message];  
        sleep _refreshTime;  
        if (_i == (_count - 1)) then {  
            _i = 0;  
        } else {  
            _i = _i + 1;  
        };  
    };  
};  