
if PingSite("www.google.com") Then 
    dim xHttp: Set xHttp = createobject("MSXML2.ServerXMLHTTP")
xHttp.Open "GET", "https://securelogin.pu.ac.in/cgi-bin/login?cmd=logout", False
xHttp.setOption 2, 13056
xHttp.Send


    WScript.Echo "You are Logged Out!"
else 
  Wscript.Echo "Check Your Internet Connection" 
end if 


Function PingSite( myWebsite )
   Dim intStatus, objHTTP

    Set objHTTP = CreateObject( "WinHttp.WinHttpRequest.5.1" )

    objHTTP.Open "GET", "http://" & myWebsite & "/", False
    objHTTP.SetRequestHeader "User-Agent", "Mozilla/4.0 (compatible; MyApp 1.0; Windows NT 5.1)"

    On Error Resume Next

    objHTTP.Send
    intStatus = objHTTP.Status

    On Error Goto 0

    If intStatus = 200 Then
        PingSite = True
    Else
        PingSite = False
    End If

    Set objHTTP = Nothing
End Function