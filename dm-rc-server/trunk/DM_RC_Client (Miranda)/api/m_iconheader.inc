{
Miranda IM: the free IM client for Microsoft* Windows*

Copyright 2007 Artem Shpynov
Copyright 2000-2007 Miranda ICQ/IM project,

all portions of this codebase are copyrighted to the people
listed in contributors.txt.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
}

{$IFNDEF M_ICONHEADER}
{$DEFINE M_ICONHEADER}

const
  MIRANDAICOTABCLASS = 'MirandaIcoTabClass';

  MITCF_SHAREDICON = $01;
  MITCF_UNICODE    = $02;

  ITCM_FIRST = (WM_USER+1024);
  ITCM_LAST  = (ITCM_FIRST+64);

  ITCM_SETBACKGROUND = (ITCM_FIRST+1); //LPARAM is HBITMAP
  ITCM_ADDITEM       = (ITCM_FIRST+2); //LPARAM is pointer to MIcoTab
  ITCM_SETSEL        = (ITCM_FIRST+3); //WPARAM is new selected index
  ITCM_GETSEL        = (ITCM_FIRST+4); //result is selected item index
  ITCM_GETITEMDATA   = (ITCM_FIRST+5); //WPARAM is item index, result is custom data

  ITCN_SELCHANGED    = 1;
  ITCN_SELCHANGEDKBD = 2;
// structure is used for storing info about single tab
type
  MIcoTab = record
    hIcon:HICON;
    szzName:TChar;
    flag:dword;
    data:LPARAM;
  end;

(*
#define MIcoTab_SetBackground(hwnd, hBmp)	\
	(SendMessage((hwnd), ITCM_SETBACKGROUND, 0, (LPARAM)(hBmp)))
#define MIcoTab_SetSel(hwnd, idx)	\
	(SendMessage((hwnd), ITCM_SETSEL, (idx), 0))
#define MIcoTab_GetSel(hwnd)	\
	(SendMessage((hwnd), ITCM_GETSEL, 0, 0))
#define MIcoTab_GetItemData(hwnd, idx)	\
	(SendMessage((hwnd), ITCM_GETITEMDATA, (idx), 0))

static __forceinline void MIcoTab_AddItem(HWND hwnd, TCHAR *lptzName, HICON hIcon, LPARAM data, BOOL bSharedIcon)
{
	MIcoTab mit = {0};
	mit.flag = (bSharedIcon?MITCF_SHAREDICON:0)|MITCF_TCHAR;
	mit.hIcon = hIcon;
	mit.tcsName = lptzName;
	mit.data = data;
	SendMessage(hwnd, ITCM_ADDITEM, (WPARAM)&mit, 0);
}
*)
{$ENDIF}
