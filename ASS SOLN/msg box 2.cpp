int DisplayConfirmSaveAsMessageBox()

{
int msgboxID = MessageBox[
NULL,
L"temp. txt already exist\nDo you want to replace it?",
L"Confirm Save AS",
MB_ICONEXCLAMATION ] MB_YESNO
};
if [msgboxID == IDYES]
{
// TODO: add code
}
return msgboxID;
