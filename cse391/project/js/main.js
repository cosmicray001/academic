function fnc_mail(id0, id1) {
    var email = document.getElementById(id0).value;
    var re = /\S+@\S+\.\S+/;
    if(re.test(email) == false){
        document.getElementById(id1).innerHTML = "Invalid email address";
    }
    else document.getElementById(id1).innerHTML = "";
};
function fnc_name(id0, id1) {
    var email = document.getElementById(id0).value;
    var re = /^[a-zA-Z ]+$/ ;
    if(re.test(email) == false){
        document.getElementById(id1).innerHTML = "Invalid name. :3";
    }
    else document.getElementById(id1).innerHTML = "";
};
function fnc_passSame(id0, id1, id2){
    var s = document.getElementById(id0).value;
    var t = document.getElementById(id1).value;
    if(s != t){
        document.getElementById(id2).innerHTML = "password don't mathed!";
    }
    else document.getElementById(id2).innerHTML = "";
};
function fnc(name, email){
    var arr = ["idsm1t1", "idsm1t2", "idsm1t3", "idsm1t4", "idsm2t1", "idsm2t2", "idsm2t3", "idsm2t4", "idsm3t1", "idsm3t2", "idsm3t3", "idsm3t4", "idsm4t1", "idsm4t2", "idsm4t3", "idsm4t4", "idsm5t1", "idsm5t2", "idsm5t3", "idsm5t4"];
    var re = /\S+@\S+\.\S+/;
    name = name.split(" ");
    for(let i = 0; i < 20; i++){
        var val = document.getElementById(arr[i]).value;
        if(re.test(val) == true){
            document.getElementById(arr[i]).disabled = true;
            document.getElementById(arr[i]).style.backgroundColor = "#FF5733";
            document.getElementById(arr[i]).value = "Booked";
            if(val == email){
                document.getElementById(arr[i]).value = "Your slot";
                document.getElementById(arr[i]).style.backgroundColor = "#FFC300";
            }
        }
        else if(val == 0){
            document.getElementById(arr[i]).disabled = false;
            document.getElementById(arr[i]).style.backgroundColor = "green";
            document.getElementById(arr[i]).value = "Book Now";
        }
    }
    
};
function fnc_fill(){
    var arr = ["idsm1t1", "idsm1t2", "idsm1t3", "idsm1t4", "idsm2t1", "idsm2t2", "idsm2t3", "idsm2t4", "idsm3t1", "idsm3t2", "idsm3t3", "idsm3t4", "idsm4t1", "idsm4t2", "idsm4t3", "idsm4t4", "idsm5t1", "idsm5t2", "idsm5t3", "idsm5t4"];
    var re = /\S+@\S+\.\S+/;
    for(let i = 0; i < 20; i++){
        var val = document.getElementById(arr[i]).value;
        if(re.test(val) == false){
            document.getElementById(arr[i]).value = "";
        }
    }
};