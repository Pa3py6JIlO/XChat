typedef struct {
    char *event;
    char *emit;
    int argc;
    xchat_hook *hook;
} print_event;

enum
{
	CHAT,
	XC_APPFOCUS,
	XC_TABOPEN,
	XC_TABCLOSE,
	XC_TABFOCUS,
	XC_ADDNOTIFY,
	XC_BANLIST,
	XC_BANNED,
	XC_BEEP,
	XC_CHANGENICK,
	XC_CHANACTION,
	XC_HCHANACTION,
	XC_CHANBAN,
	XC_CHANDATE,
	XC_CHANDEHOP,
	XC_CHANDEOP,
	XC_CHANDEVOICE,
	XC_CHANEXEMPT,
	XC_CHANHOP,
	XC_CHANINVITE,
	XC_CHANLISTHEAD,
	XC_CHANMSG,
	XC_CHANMODEGEN,
	XC_CHANMODES,
	XC_HCHANMSG,
	XC_CHANNOTICE,
	XC_CHANOP,
	XC_CHANRMEXEMPT,
	XC_CHANRMINVITE,
	XC_CHANRMKEY,
	XC_CHANRMLIMIT,
	XC_CHANSETKEY,
	XC_CHANSETLIMIT,
	XC_CHANUNBAN,
	XC_CHANVOICE,
	XC_CONNECTED,
	XC_CONNECT,
	XC_CONNFAIL,
	XC_CTCPGEN,
	XC_CTCPGENC,
	XC_CTCPSEND,
	XC_CTCPSND,
	XC_DCCCHATABORT,
	XC_DCCCONCHAT,
	XC_DCCCHATF,
	XC_DCCCHATOFFER,
	XC_DCCCHATOFFERING,
	XC_DCCCHATREOFFER,
	XC_DCCCONFAIL,
	XC_DCCGENERICOFFER,
	XC_DCCHEAD,
	XC_MALFORMED,
	XC_DCCOFFER,
	XC_DCCIVAL,
	XC_DCCRECVABORT,
	XC_DCCRECVCOMP,
	XC_DCCCONRECV,
	XC_DCCRECVERR,
	XC_DCCFILEERR,
	XC_DCCRENAME,
	XC_DCCRESUMEREQUEST,
	XC_DCCSENDABORT,
	XC_DCCSENDCOMP,
	XC_DCCCONSEND,
	XC_DCCSENDFAIL,
	XC_DCCSENDOFFER,
	XC_DCCSTALL,
	XC_DCCTOUT,
	XC_DELNOTIFY,
	XC_DISCON,
	XC_FOUNDIP,
	XC_GENMSG,
	XC_IGNOREADD,
	XC_IGNORECHANGE,
	XC_IGNOREFOOTER,
	XC_IGNOREHEADER,
	XC_IGNOREREMOVE,
	XC_IGNOREEMPTY,
	XC_INVITE,
	XC_INVITED,
	XC_JOIN,
	XC_KEYWORD,
	XC_KICK,
	XC_KILL,
	XC_MSGSEND,
	XC_MOTD,
	XC_MOTDSKIP,
	XC_NICKCLASH,
	XC_NICKFAIL,
	XC_NODCC,
	XC_NOCHILD,
	XC_NOTICE,
	XC_NOTICESEND,
	XC_NOTIFYEMPTY,
	XC_NOTIFYHEAD,
	XC_NOTIFYNUMBER,
	XC_NOTIFYOFFLINE,
	XC_NOTIFYONLINE,
	XC_OPENDIALOG,
	XC_PART,
	XC_PARTREASON,
	XC_PINGREP,
	XC_PINGTIMEOUT,
	XC_PRIVMSG,
	XC_DPRIVMSG,
	XC_ALREADYPROCESS,
	XC_QUIT,
	XC_RAWMODES,
	XC_WALLOPS,
	XC_RESOLVINGUSER,
	XC_SERVERCONNECTED,
	XC_SERVERERROR,
	XC_SERVERLOOKUP,
	XC_SERVNOTICE,
	XC_SERVTEXT,
	XC_STOPCONNECT,
	XC_TOPIC,
	XC_TOPICDATE,
	XC_NEWTOPIC,
	XC_UKNHOST,
	XC_USERLIMIT,
	XC_USERSONCHAN,
	XC_WHOIS5,
	XC_WHOIS2,
	XC_WHOIS6,
	XC_WHOIS_ID,
	XC_WHOIS_AUTH,
	XC_WHOIS_REALHOST,
	XC_WHOIS4,
	XC_WHOIS4T,
	XC_WHOIS1,
	XC_WHOIS3,
	XC_UJOIN,
	XC_UPART,
	XC_UPARTREASON,
	XC_UKICK,
	XC_UINVITE,
	XC_UCHANMSG,
	XC_UCHANGENICK,
	XC_SIZE
};

static print_event xc[] = {
	{ "CHAT", "DCC Chat Text", -1, NULL },
	{ "XC_APPFOCUS", "Focus Window", -3, NULL },
	{ "XC_TABOPEN", "Open Context", -2, NULL },
	{ "XC_TABCLOSE", "Close Context", -2, NULL },
	{ "XC_TABFOCUS", "Focus Tab", -2, NULL },
	{ "XC_ADDNOTIFY", "Add Notify", 1, NULL },
	{ "XC_BANLIST", "Ban List", 4, NULL },
	{ "XC_BANNED", "Banned", 1, NULL },
	{ "XC_BEEP", "Beep", 0, NULL },
	{ "XC_CHANGENICK", "Change Nick", 2, NULL },
	{ "XC_CHANACTION", "Channel Action", 2, NULL },
	{ "XC_HCHANACTION", "Channel Action Hilight", 2, NULL },
	{ "XC_CHANBAN", "Channel Ban", 2, NULL },
	{ "XC_CHANDATE", "Channel Creation", 2, NULL },
	{ "XC_CHANDEHOP", "Channel DeHalfOp", 2, NULL },
	{ "XC_CHANDEOP", "Channel DeOp", 2, NULL },
	{ "XC_CHANDEVOICE", "Channel DeVoice", 2, NULL },
	{ "XC_CHANEXEMPT", "Channel Exempt", 2, NULL },
	{ "XC_CHANHOP", "Channel Half-Operator", 2, NULL },
	{ "XC_CHANINVITE", "Channel INVITE", 2, NULL },
	{ "XC_CHANLISTHEAD", "Channel List", 0, NULL },
	{ "XC_CHANMSG", "Channel Message", 4, NULL },
	{ "XC_CHANMODEGEN", "Channel Mode Generic", 4, NULL },
	{ "XC_CHANMODES", "Channel Modes", 2, NULL },
	{ "XC_HCHANMSG", "Channel Msg Hilight", 4, NULL },
	{ "XC_CHANNOTICE", "Channel Notice", 3, NULL },
	{ "XC_CHANOP", "Channel Operator", 2, NULL },
	{ "XC_CHANRMEXEMPT", "Channel Remove Exempt", 2, NULL },
	{ "XC_CHANRMINVITE", "Channel Remove Invite", 2, NULL },
	{ "XC_CHANRMKEY", "Channel Remove Keyword", 1, NULL },
	{ "XC_CHANRMLIMIT", "Channel Remove Limit", 1, NULL },
	{ "XC_CHANSETKEY", "Channel Set Key", 2, NULL },
	{ "XC_CHANSETLIMIT", "Channel Set Limit", 2, NULL },
	{ "XC_CHANUNBAN", "Channel UnBan", 2, NULL },
	{ "XC_CHANVOICE", "Channel Voice", 2, NULL },
	{ "XC_CONNECTED", "Connected", 0, NULL },
	{ "XC_CONNECT", "Connecting", 3, NULL },
	{ "XC_CONNFAIL", "Connection Failed", 1, NULL },
	{ "XC_CTCPGEN", "CTCP Generic", 2, NULL },
	{ "XC_CTCPGENC", "CTCP Generic to Channel", 3, NULL },
	{ "XC_CTCPSEND", "CTCP Send", 2, NULL },
	{ "XC_CTCPSND", "CTCP Sound", 2, NULL },
	{ "XC_DCCCHATABORT", "DCC CHAT Abort", 1, NULL },
	{ "XC_DCCCONCHAT", "DCC CHAT Connect", 2, NULL },
	{ "XC_DCCCHATF", "DCC CHAT Failed", 4, NULL },
	{ "XC_DCCCHATOFFER", "DCC CHAT Offer", 1, NULL },
	{ "XC_DCCCHATOFFERING", "DCC CHAT Offering", 1, NULL },
	{ "XC_DCCCHATREOFFER", "DCC CHAT Reoffer", 1, NULL },
	{ "XC_DCCCONFAIL", "DCC Conection Failed", 3, NULL },
	{ "XC_DCCGENERICOFFER", "DCC Generic Offer", 2, NULL },
	{ "XC_DCCHEAD", "DCC Header", 0, NULL },
	{ "XC_MALFORMED", "DCC Malformed", 2, NULL },
	{ "XC_DCCOFFER", "DCC Offer", 3, NULL },
	{ "XC_DCCIVAL", "DCC Offer Not Valid", 0, NULL },
	{ "XC_DCCRECVABORT", "DCC RECV Abort", 2, NULL },
	{ "XC_DCCRECVCOMP", "DCC RECV Complete", 4, NULL },
	{ "XC_DCCCONRECV", "DCC RECV Connect", 3, NULL },
	{ "XC_DCCRECVERR", "DCC RECV Failed", 4, NULL },
	{ "XC_DCCFILEERR", "DCC RECV File Open Error", 2, NULL },
	{ "XC_DCCRENAME", "DCC Rename", 2, NULL },
	{ "XC_DCCRESUMEREQUEST", "DCC RESUME Request", 3, NULL },
	{ "XC_DCCSENDABORT", "DCC SEND Abort", 2, NULL },
	{ "XC_DCCSENDCOMP", "DCC SEND Complete", 3, NULL },
	{ "XC_DCCCONSEND", "DCC SEND Connect", 3, NULL },
	{ "XC_DCCSENDFAIL", "DCC SEND Failed", 3, NULL },
	{ "XC_DCCSENDOFFER", "DCC SEND Offer", 4, NULL },
	{ "XC_DCCSTALL", "DCC Stall", 3, NULL },
	{ "XC_DCCTOUT", "DCC Timeout", 3, NULL },
	{ "XC_DELNOTIFY", "Delete Notify", 1, NULL },
	{ "XC_DISCON", "Disconnected", 1, NULL },
	{ "XC_FOUNDIP", "Found IP", 1, NULL },
	{ "XC_GENMSG", "Generic Message", 2, NULL },
	{ "XC_IGNOREADD", "Ignore Add", 1, NULL },
	{ "XC_IGNORECHANGE", "Ignore Changed", 1, NULL },
	{ "XC_IGNOREFOOTER", "Ignore Footer", 0, NULL },
	{ "XC_IGNOREHEADER", "Ignore Header", 0, NULL },
	{ "XC_IGNOREREMOVE", "Ignore Remove", 1, NULL },
	{ "XC_IGNOREEMPTY", "Ignorelist Empty", 0, NULL },
	{ "XC_INVITE", "Invite", 1, NULL },
	{ "XC_INVITED", "Invited", 3, NULL },
	{ "XC_JOIN", "Join", 3, NULL },
	{ "XC_KEYWORD", "Keyword", 1, NULL },
	{ "XC_KICK", "Kick", 4, NULL },
	{ "XC_KILL", "Killed", 2, NULL },
	{ "XC_MSGSEND", "Message Send", 2, NULL },
	{ "XC_MOTD", "Motd", 1, NULL },
	{ "XC_MOTDSKIP", "MOTD Skipped", 0, NULL },
	{ "XC_NICKCLASH", "Nick Clash", 2, NULL },
	{ "XC_NICKFAIL", "Nick Failed", 0, NULL },
	{ "XC_NODCC", "No DCC", 0, NULL },
	{ "XC_NOCHILD", "No Running Process", 0, NULL },
	{ "XC_NOTICE", "Notice", 2, NULL },
	{ "XC_NOTICESEND", "Notice Send", 2, NULL },
	{ "XC_NOTIFYEMPTY", "Notify Empty", 0, NULL },
	{ "XC_NOTIFYHEAD", "Notify Header", 0, NULL },
	{ "XC_NOTIFYNUMBER", "Notify Number", 1, NULL },
	{ "XC_NOTIFYOFFLINE", "Notify Offline", 2, NULL },
	{ "XC_NOTIFYONLINE", "Notify Online", 2, NULL },
	{ "XC_OPENDIALOG", "Open Dialog", 0, NULL },
	{ "XC_PART", "Part", 3, NULL },
	{ "XC_PARTREASON", "Part with Reason", 4, NULL },
	{ "XC_PINGREP", "Ping Reply", 2, NULL },
	{ "XC_PINGTIMEOUT", "Ping Timeout", 1, NULL },
	{ "XC_PRIVMSG", "Private Message", 3, NULL },
	{ "XC_DPRIVMSG", "Private Message to Dialog", 3, NULL },
	{ "XC_ALREADYPROCESS", "Process Already Running", 0, NULL },
	{ "XC_QUIT", "Quit", 3, NULL },
	{ "XC_RAWMODES", "Raw Modes", 2, NULL },
	{ "XC_WALLOPS", "Receive Wallops", 2, NULL },
	{ "XC_RESOLVINGUSER", "Resolving User", 2, NULL },
	{ "XC_SERVERCONNECTED", "Server Connected", 0, NULL },
	{ "XC_SERVERERROR", "Server Error", 1, NULL },
	{ "XC_SERVERLOOKUP", "Server Lookup", 1, NULL },
	{ "XC_SERVNOTICE", "Server Notice", 2, NULL },
	{ "XC_SERVTEXT", "Server Text", 2, NULL },
	{ "XC_STOPCONNECT", "Stop Connection", 1, NULL },
	{ "XC_TOPIC", "Topic", 2, NULL },
	{ "XC_TOPICDATE", "Topic Creation", 3, NULL },
	{ "XC_NEWTOPIC", "Topic Change", 3, NULL },
	{ "XC_UKNHOST", "Unknown Host", 0, NULL },
	{ "XC_USERLIMIT", "User Limit", 1, NULL },
	{ "XC_USERSONCHAN", "Users On Channel", 2, NULL },
	{ "XC_WHOIS5", "WhoIs Away Line", 2, NULL },
	{ "XC_WHOIS2", "WhoIs Channel/Oper Line", 2, NULL },
	{ "XC_WHOIS6", "WhoIs End", 1, NULL },
	{ "XC_WHOIS_ID", "WhoIs Identified", 2, NULL },
	{ "XC_WHOIS_AUTH", "WhoIs Authenticated", 3, NULL },
	{ "XC_WHOIS_REALHOST", "WhoIs Real Host", 4, NULL },
	{ "XC_WHOIS4", "WhoIs Idle Line", 2, NULL },
	{ "XC_WHOIS4T", "WhoIs Idle Line with Signon", 3, NULL },
	{ "XC_WHOIS1", "WhoIs Name Line", 4, NULL },
	{ "XC_WHOIS3", "WhoIs Server Line", 2, NULL },
	{ "XC_UJOIN", "You Join", 3, NULL },
	{ "XC_UPART", "You Part", 3, NULL },
	{ "XC_UPARTREASON", "You Part with Reason", 4, NULL },
	{ "XC_UKICK", "You Kicked", 4, NULL },
	{ "XC_UINVITE", "Your Invitation", 3, NULL },
	{ "XC_UCHANMSG", "Your Message", 4, NULL },
	{ "XC_UCHANGENICK", "Your Nick Changing", 2, NULL },
};
