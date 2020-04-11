var s = [["“How many cares one loses when one decides not to be something but to be someone.”", "-Gabrielle “Coco” Chanel"], ["“Be who you are and say what you feel, because those who mind don’t matter and those who matter don’t mind.”", "-Dr. Seuss"], ["“Imitation is suicide.”", "-Ralph Waldo Emerson"], ["“Do your own thing on your own terms and get what you came here for.”", "-Oliver James"], ["“Flatter yourself critically.”", "-Willis Goth Regier"], ["“Do what you feel in your heart to be right, for you’ll be criticized anyway.”", "-Eleanor Roosevelt"], ["“Whenever you find yourself on the side of the majority, it is time to pause and reflect.”", "-Mark Twain"], ["“I will not let anyone walk through my mind with their dirty feet.”", "-Mahatma Gandhi"], ["“Better to write for yourself and have no public, than to write for the public and have no self.”", "-Cyril Connolly"], ["“We must not allow other people’s limited perceptions to define us.”", "-Virginia Satir"]];
function quote_box(idx01, idx02){
    let choice = Math.floor(Math.random() * (s.length));
    msg = s[choice][0];
    msg1 = s[choice][1];
    document.getElementById(idx01).innerHTML = msg;
    document.getElementById(idx02).innerHTML = msg1;
};

function fnc01(idh, idp, iddiv){
    document.getElementById(iddiv).style.backgroundColor = "black";
    document.getElementById(iddiv).style.borderColor = "yellow";
    document.getElementById(idh).style.color = "white";
    document.getElementById(idp).style.color = "white";
    document.getElementById(idh).style.fontFamily = "'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif";
    document.getElementById(idp).style.fontFamily = "'Lucida Sans', 'Lucida Sans Regular', 'Lucida Grande', 'Lucida Sans Unicode', Geneva, Verdana, sans-serif";
};
function fnc02(idh, idp, iddiv){
    document.getElementById(iddiv).style.backgroundColor = "green";
    document.getElementById(iddiv).style.borderColor = "black";
    document.getElementById(idh).style.color = "orange";
    document.getElementById(idp).style.color = "orange";
    document.getElementById(idh).style.fontFamily = "'Courier New', Courier, monospace";
    document.getElementById(idp).style.fontFamily = "'Courier New', Courier, monospace";
};
function fnc03(idh, idp, iddiv){
    document.getElementById(iddiv).style.backgroundColor = "gray";
    document.getElementById(iddiv).style.borderColor = "blue";
    document.getElementById(idh).style.color = "black";
    document.getElementById(idp).style.color = "black";
    document.getElementById(idh).style.fontFamily = "'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif";
    document.getElementById(idp).style.fontFamily = "'Trebuchet MS', 'Lucida Sans Unicode', 'Lucida Grande', 'Lucida Sans', Arial, sans-serif";
};
function fnc04(idh, idp, iddiv){
    document.getElementById(iddiv).style.backgroundColor = "blue";
    document.getElementById(iddiv).style.borderColor = "red";
    document.getElementById(idh).style.color = "pink";
    document.getElementById(idp).style.color = "pink";
    document.getElementById(idh).style.fontFamily = "monospace";
    document.getElementById(idp).style.fontFamily = "monospace";
};
function fnc_con(idbox, idtyp, idshow){
    var val = document.getElementById(idbox).value;
    var typ = document.getElementById(idtyp).value;
    if(typ == "lbkg"){
        document.getElementById(idshow).innerHTML = (val * 0.4536) + " kg"
    }
    else{
        document.getElementById(idshow).innerHTML = (val * 2.2046) + " lb"
    }
};

function fnc_amms(idbx, idx, idn, ids, ida, idr){
    var s = document.getElementById(idbx).value;
    var a = [], val = 0;
    let ck = 1;
    for(let i = 0; i < s.length; i++){
        if(s[i] == '-') ck = -1;
        if(s[i] == ','){
            if(ck == -1){
                val *= -1;
                ck = 1;
            }
            a.push(val);
            val = 0;
        }
        else{
            if(s[i] != '-') val = (val * 10) + (s[i] - '0');
        }
    }
    if(s[s.length - 1] != ','){
        if(ck == -1){
            val *= -1;
            ck == 1;
        }
        a.push(val);
    }
    var mx = -10000007, mn = 10000007, sum = 0, avg = 0;
    for(let i = 0; i < a.length; i++){
        sum += a[i];
        if(mx < a[i]) mx = a[i];
        if(mn > a[i]) mn = a[i];
    }
    avg = sum / a.length;
    document.getElementById(idx).innerHTML = "Max: " + mx;
    document.getElementById(idn).innerHTML = "Min: " + mn;
    document.getElementById(ids).innerHTML = "Sum: " + sum;
    document.getElementById(ida).innerHTML = "Avg: " + avg;
    var ss = "";
    for(let i = a.length - 1; i >= 0; i--){
        ss += a[i];
        if(i != 0) ss += ",";
    }
    document.getElementById(idr).innerHTML = "Rev: " + ss;
};
var cnt = 0;
function fnc_clr(id001){
    cnt = 0;
    document.getElementById(id001).value = "";
}
function fnc_case(idx){
    var txt = document.getElementById(idx).value;
    if(cnt % 2 == 0){
        document.getElementById(idx).value = txt.toUpperCase();
    }
    else{
        document.getElementById(idx).value = txt.toLowerCase();
    }
    cnt++;
};
function fnc_sort(idx){
    var tx = document.getElementById(idx).value;
    var tx1 = tx.split("\n");
    tx1.sort();
    document.getElementById(idx).value = tx1.join("\n");
};
function fnc_rev(idx){
    var tx = document.getElementById(idx).value;
    var tx1 = tx.split("\n");
    for(let i = 0; i < tx1.length; i++){
        let st1 = tx1[i].split("");
        st1.reverse();
        tx1[i] = st1.join("");
    }
    document.getElementById(idx).value = tx1.join("\n");
};
function fnc_bnk(idx){
    var tx = document.getElementById(idx).value;
    var tx1 = tx.split("\n");
    for(let i = 0; i < tx1.length; i++){
        let st1 = tx1[i].split(" ");
        tx1[i] = st1.join("");
    }
    document.getElementById(idx).value = tx1.join("\n");
};
function fnc_add(idx){
    var tx = document.getElementById(idx).value;
    var tx1 = tx.split("\n");
    for(let i = 0; i < tx1.length; i++){
        tx1[i] = (i + 1) + " " + tx1[i];
    }
    document.getElementById(idx).value = tx1.join("\n");
};
function fnc_ran(idx){
    var tx = document.getElementById(idx).value;
    var tx1 = tx.split("\n");
    for(let i = 0; i < tx1.length; i++){
        let idx = Math.floor(Math.random() * (tx1.length));
        let tem = tx1[i];
        tx1[i] = tx1[idx];
        tx1[idx] = tem;
    }
    document.getElementById(idx).value = tx1.join("\n");
};