Dim usr,pass

usr=InputBox("Enter UserName Provided to You","PU Auto-Login","USERNAME")
if usr ="USERNAME" then 
Wscript.Echo "Enter Valid Username"
else
if usr="" then
Wscript.Echo "Enter Valid Username"
else
pass=InputBox("Enter Password ","PU Auto-Login","Password")
if pass="" then
Wscript.echo "Enter a Valid PassWord"
else
strpath = "c:\PU\Charanjit-Singh\loginer.exe " & usr &" " &pass
Set Shell=CreateObject("wscript.shell")
Shell.Run(strpath)
end if
end if
end if