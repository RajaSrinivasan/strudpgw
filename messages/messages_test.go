package messages

import (
	"fmt"
	"testing"
)

func TestBoardIdType(t *testing.T) {
	fmt.Printf("String for %d is %s\n", MM_BG_BOARD_ID, Image(MM_BG_BOARD_ID))
	fmt.Printf("String for %d is %s\n", MM_PS_BOARD_ID, Image(MM_PS_BOARD_ID))
	fmt.Printf("String for %d is %s\n", MM_TH_BOARD_ID, Image(MM_TH_BOARD_ID))
	fmt.Printf("String for %d is %s\n", MM_MC_BOARD_ID, Image(MM_MC_BOARD_ID))
	fmt.Printf("String for %d is %s\n", MM_CON_BOARD_ID, Image(MM_CON_BOARD_ID))
	fmt.Printf("String for %d is %s\n", 56, Image(56))
}
func TestBoardValueType(t *testing.T) {
	t.Log("ID for ", "MM_BG_BOARD_ID", Value("MM_BG_BOARD_ID"))
	t.Log("ID for ", "?", Value("?"))
}

func TestMessageTypes(t *testing.T) {
	t.Logf("Message Type %x CRC Active = %v\n", 0xff, CRCActive(0xff))
	t.Logf("Message Type %x CRC Active = %v\n", 0x80ff, CRCActive(0x80ff))
	t.Logf("Message Type %x CRC Active = %v\n", 0x60ff, CRCActive(0x60ff))
	t.Logf("Message Type %x CRC Active = %v\n", 0xf0ff, CRCActive(0xf0ff))
}
