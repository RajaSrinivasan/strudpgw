package messages

type BOARD_ID_TYPE uint8

const (
	MM_MC_BOARD_ID  BOARD_ID_TYPE = 0x30
	MM_PS_BOARD_ID                = 0x31
	MM_TH_BOARD_ID                = 0x32
	MM_BG_BOARD_ID                = 0x33
	MM_CON_BOARD_ID               = 0x34
)

type MSG_FIELD_TYPE uint16

type mm_hdr struct {
	dst       uint8
	src       uint8
	msg_field MSG_FIELD_TYPE
}

func Image(bid BOARD_ID_TYPE) string {
	switch bid {
	case MM_MC_BOARD_ID:
		return "MM_MC_BOARD_ID"
	case MM_PS_BOARD_ID:
		return "MM_PS_BOARD_ID"
	case MM_TH_BOARD_ID:
		return "MM_TH_BOARD_ID"
	case MM_BG_BOARD_ID:
		return "MM_BG_BOARD_ID"
	case MM_CON_BOARD_ID:
		return "MM_CON_BOARD_ID"
	default:
		return "UNKNOWN"
	}
}

func Value(bidname string) BOARD_ID_TYPE {
	switch bidname {
	case "MM_MC_BOARD_ID":
		return MM_MC_BOARD_ID
	case "MM_PS_BOARD_ID":
		return MM_PS_BOARD_ID
	case "MM_TH_BOARD_ID":
		return MM_TH_BOARD_ID
	case "MM_BG_BOARD_ID":
		return MM_BG_BOARD_ID
	case "MM_CON_BOARD_ID":
		return MM_CON_BOARD_ID
	default:
		return 0
	}
}

func CRCActive(msg_field MSG_FIELD_TYPE) bool {
	if (msg_field & 0x8000) != 0 {
		return true
	}
	return false
}

func MessageType(msg_field MSG_FIELD_TYPE) MSG_FIELD_TYPE {
	return msg_field & 0x6fff
}
