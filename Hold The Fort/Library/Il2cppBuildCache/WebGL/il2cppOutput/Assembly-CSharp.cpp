#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<UnityEngine.Tilemaps.Tilemap,System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.HashSet`1<UnityEngine.Tilemaps.TileBase>,System.Collections.Generic.HashSet`1<UnityEngine.Vector3Int>>>
struct Dictionary_2_t37D9456BBAA3F833E06AECA6A91937320081C2EC;
// System.Collections.Generic.HashSet`1<UnityEngine.Vector3Int>
struct HashSet_1_t38F6C53CFC4F08A5BEC5C074287FD2E68131EDAB;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
struct IList_1_tA173749C519FBC1BB13F79CF4E7D4E0479494114;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F;
// System.Collections.Generic.List`1<UnityEngine.RuleTile/TilingRule>
struct List_1_t577AC7F2FB5A90794D3428EB3F57B4785DD568ED;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// InventorySlot[]
struct InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Tilemaps.TileBase[]
struct TileBaseU5BU5D_t9D113C5AC37048FAC6A25181181921FC203459E7;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// AttackScript
struct AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// BuildScript
struct BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525;
// BuildingBlock
struct BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraScript
struct CameraScript_t62AA38C1604A7163AD920FB5D2AD4C9C39B360B7;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Container
struct Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DialogueChoice
struct DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82;
// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// Entity
struct Entity_t044863A7B37E4AD27CE78D4B680109A139080095;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// UnityEngine.Font
struct Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.Grid
struct Grid_t22D0DEF54366450C35DA4B795F06534948AA0236;
// UnityEngine.GridLayout
struct GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29;
// Hotbar
struct Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805;
// InventorySlot
struct InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB;
// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C;
// ItemIDList
struct ItemIDList_tD2A9FB64FDC1155CAC876F93F6768EF2819C1382;
// ItemMover
struct ItemMover_t1737619556BD4ADE440A28F9827FC6480E43981A;
// ItemObjectCoolEffect
struct ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855;
// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MeleeWeapon
struct MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MousePointer
struct MousePointer_tC2F2FBAC4C4EF4C03E86ED58A0CB2486AA2FF97A;
// NPC
struct NPC_tC1B80DAFC03710A57E14A5AA80EED2CD89A35AE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.RuleTile
struct RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SoundMaster
struct SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// TempDialogue
struct TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Tilemaps.TileBase
struct TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052;
// TileData
struct TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Weapon
struct Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226;
// AttackScript/<FadeLine>d__23
struct U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7;
// AttackScript/<SizeSwingShift>d__21
struct U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923;
// AttackScript/<StartSwing>d__20
struct U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// DialogueChoice/<CloseDialogueWindow>d__20
struct U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF;
// DialogueChoice/<OpenDialogueWindow>d__21
struct U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4;
// DialogueChoice/<ShiftWindowRight>d__19
struct U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783;
// DialogueChoice/<WriteToTextBox>d__23
struct U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E;
// Entity/<ResetColor>d__18
struct U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62;
// Hotbar/<Adjust>d__8
struct U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E;
// Hotbar/<DelayUpdate>d__13
struct U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0;
// InventorySlot/<SizeShift>d__14
struct U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B;
// InventorySlot/<SwapItems>d__10
struct U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A;
// Item/<CoolItemEffectStuffz>d__10
struct U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269;
// Item/<PlayerCollect>d__7
struct U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791;
// ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1
struct U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Player/<RegenerateHealth>d__12
struct U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7;
// Player/<StartEndGame>d__10
struct U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// TempDialogue/<DialogueLoop>d__12
struct U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1;

IL2CPP_EXTERN_C RuntimeClass* BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tB01A3C34C6771AA2422AFB70485E860D8CA3DAC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral175EDCE3F89A5DFCE783E8CB381069DCEAC8F978;
IL2CPP_EXTERN_C String_t* _stringLiteral1B25FEF8B32016F13514A0970D493D2BCE6B8DF7;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3FA5E6C30F23EA419AEE3F603DE46AB409794340;
IL2CPP_EXTERN_C String_t* _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673;
IL2CPP_EXTERN_C String_t* _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral5D4CE176306E55510007292A41816F18D1FA1DAF;
IL2CPP_EXTERN_C String_t* _stringLiteral6398C77D5214C9281A21E79C482D77B481812FD7;
IL2CPP_EXTERN_C String_t* _stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral932ABDD0FAE09741F960D9DF0F89DCC071D0C464;
IL2CPP_EXTERN_C String_t* _stringLiteral93E27A7CD1598273FBAB8B91FC07DDCF407AFC3D;
IL2CPP_EXTERN_C String_t* _stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7;
IL2CPP_EXTERN_C String_t* _stringLiteralA69586E2F8DD8B6019A1FACA4597D98920E154CB;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralC4D6860B76928498777DED120D3B401E9055DA61;
IL2CPP_EXTERN_C String_t* _stringLiteralC4FD08C4B600C28BACC3E6CD9C3BDE799E46F78F;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E970ADB7B2CB9EC4B24CF97A6534BE1DA70386;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA2F44DE32C68853E4DA7500BA616A2A3B45D89;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralCF2A70D0EF9367B1493641397DB64D64CF25C751;
IL2CPP_EXTERN_C String_t* _stringLiteralD0AF6CBE9055E66D41470BE91A557FC19A093436;
IL2CPP_EXTERN_C String_t* _stringLiteralD0BAF632B4E9F819E3262ABF4FA71FE9F385EC42;
IL2CPP_EXTERN_C String_t* _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE586D26F2F2D2462A182B41FF7B0C66457161A10;
IL2CPP_EXTERN_C String_t* _stringLiteralF069EC4EC7E149A5B5D512DCB169853546760362;
IL2CPP_EXTERN_C String_t* _stringLiteralF164B67C241F3C67C0F6D0D0CA2449391C0CD635;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEntity_t044863A7B37E4AD27CE78D4B680109A139080095_m510DFC38CA13A2E606DBF067DCF56AD6EC93734E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5_m877A6356616DCD3017D3B78434148723B8152C7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m9B69FA7F307BC43E86DE726E083BF03460733E32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82_m98EB14B2D684AB2CAD077F9B403EE218C29AD079_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGrid_t22D0DEF54366450C35DA4B795F06534948AA0236_mEAD03C94C9BAD329C821CE3C6681FCEA6A84FEF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA_m60D8373F2B0D5772718609B01854ED85A08B9978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A_mBBC4C34E25A85DF84EEB6D1C9062FF9073A4C77C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_mEACBFF0E0C686B5520256EBA97379F826FF9DE3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAdjustU3Ed__8_System_Collections_IEnumerator_Reset_m36FE67D119F1B7A36D77670D8B876F16EA1EA5EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCloseDialogueWindowU3Ed__20_System_Collections_IEnumerator_Reset_m576A91FA1EAD8CDB1D6DE409CF3B8EE03CB311C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoolItemEffectStuffzU3Ed__10_System_Collections_IEnumerator_Reset_m31F9298A25126FDBEFA43ED20782174ED6C1C0BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoolItemEffectStuffzU3Ed__1_System_Collections_IEnumerator_Reset_m85D614A17C7C5CD6DAE43020EA81308B8E61A17C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDelayUpdateU3Ed__13_System_Collections_IEnumerator_Reset_m71077E8888F37B78A25FF630B233B5E1C39FCFD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDialogueLoopU3Ed__12_System_Collections_IEnumerator_Reset_m5F7B63FD5D944D28006170AB98B89ED4965CE854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeLineU3Ed__23_System_Collections_IEnumerator_Reset_m568DF1D50EB7116D1C8828E441DAF778D2DD5505_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenDialogueWindowU3Ed__21_System_Collections_IEnumerator_Reset_mD478435A343AD1E26C2873450895294D518CA598_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayerCollectU3Ed__7_System_Collections_IEnumerator_Reset_mAC6BF8598C2F116814C2A2E7247AE92FBE656004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRegenerateHealthU3Ed__12_System_Collections_IEnumerator_Reset_m4B905EE4AF3E3F7954EA1F6B11812F68B06DA62E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetColorU3Ed__18_System_Collections_IEnumerator_Reset_m87950E0BAB190E1E496A23DC1DCEA8E7BE4B6FE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShiftWindowRightU3Ed__19_System_Collections_IEnumerator_Reset_mDDF32425EA13375E19558BCADBC0AE6CC5368B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSizeShiftU3Ed__14_System_Collections_IEnumerator_Reset_m2C5E7867D1B6F5CD8076DE313B0C1F667F49902E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSizeSwingShiftU3Ed__21_System_Collections_IEnumerator_Reset_m4BCAB62574719496EF9BDD8FBE028E15D5092E9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartEndGameU3Ed__10_System_Collections_IEnumerator_Reset_mAE31217E31F914CA8122BF1CFAF78314F2401C86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartSwingU3Ed__20_System_Collections_IEnumerator_Reset_m8969BAB7A2BFF2220EA7B22FB78AC712218A4DCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwapItemsU3Ed__10_System_Collections_IEnumerator_Reset_m2C3054EEDF6AF6C72F641DDFCCE371BC1D3EB25B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWriteToTextBoxU3Ed__23_System_Collections_IEnumerator_Reset_m1EC862093D21F999A89FA02B3ACA022E45CAABD6_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// AttackScript/<FadeLine>d__23
struct U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7  : public RuntimeObject
{
public:
	// System.Int32 AttackScript/<FadeLine>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AttackScript/<FadeLine>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AttackScript AttackScript/<FadeLine>d__23::<>4__this
	AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * ___U3CU3E4__this_2;
	// System.Int32 AttackScript/<FadeLine>d__23::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7, ___U3CU3E4__this_2)); }
	inline AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// AttackScript/<SizeSwingShift>d__21
struct U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923  : public RuntimeObject
{
public:
	// System.Int32 AttackScript/<SizeSwingShift>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AttackScript/<SizeSwingShift>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AttackScript AttackScript/<SizeSwingShift>d__21::<>4__this
	AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * ___U3CU3E4__this_2;
	// System.Int32 AttackScript/<SizeSwingShift>d__21::<x>5__2
	int32_t ___U3CxU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923, ___U3CU3E4__this_2)); }
	inline AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CxU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923, ___U3CxU3E5__2_3)); }
	inline int32_t get_U3CxU3E5__2_3() const { return ___U3CxU3E5__2_3; }
	inline int32_t* get_address_of_U3CxU3E5__2_3() { return &___U3CxU3E5__2_3; }
	inline void set_U3CxU3E5__2_3(int32_t value)
	{
		___U3CxU3E5__2_3 = value;
	}
};


// AttackScript/<StartSwing>d__20
struct U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536  : public RuntimeObject
{
public:
	// System.Int32 AttackScript/<StartSwing>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AttackScript/<StartSwing>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AttackScript AttackScript/<StartSwing>d__20::<>4__this
	AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536, ___U3CU3E4__this_2)); }
	inline AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// DialogueChoice/<WriteToTextBox>d__23
struct U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E  : public RuntimeObject
{
public:
	// System.Int32 DialogueChoice/<WriteToTextBox>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogueChoice/<WriteToTextBox>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DialogueChoice DialogueChoice/<WriteToTextBox>d__23::<>4__this
	DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * ___U3CU3E4__this_2;
	// System.Boolean DialogueChoice/<WriteToTextBox>d__23::<isClosing>5__2
	bool ___U3CisClosingU3E5__2_3;
	// System.Int32 DialogueChoice/<WriteToTextBox>d__23::<i>5__3
	int32_t ___U3CiU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E, ___U3CU3E4__this_2)); }
	inline DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CisClosingU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E, ___U3CisClosingU3E5__2_3)); }
	inline bool get_U3CisClosingU3E5__2_3() const { return ___U3CisClosingU3E5__2_3; }
	inline bool* get_address_of_U3CisClosingU3E5__2_3() { return &___U3CisClosingU3E5__2_3; }
	inline void set_U3CisClosingU3E5__2_3(bool value)
	{
		___U3CisClosingU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E, ___U3CiU3E5__3_4)); }
	inline int32_t get_U3CiU3E5__3_4() const { return ___U3CiU3E5__3_4; }
	inline int32_t* get_address_of_U3CiU3E5__3_4() { return &___U3CiU3E5__3_4; }
	inline void set_U3CiU3E5__3_4(int32_t value)
	{
		___U3CiU3E5__3_4 = value;
	}
};


// Entity/<ResetColor>d__18
struct U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62  : public RuntimeObject
{
public:
	// System.Int32 Entity/<ResetColor>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Entity/<ResetColor>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Entity Entity/<ResetColor>d__18::<>4__this
	Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * ___U3CU3E4__this_2;
	// System.Int32 Entity/<ResetColor>d__18::<x>5__2
	int32_t ___U3CxU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62, ___U3CU3E4__this_2)); }
	inline Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Entity_t044863A7B37E4AD27CE78D4B680109A139080095 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CxU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62, ___U3CxU3E5__2_3)); }
	inline int32_t get_U3CxU3E5__2_3() const { return ___U3CxU3E5__2_3; }
	inline int32_t* get_address_of_U3CxU3E5__2_3() { return &___U3CxU3E5__2_3; }
	inline void set_U3CxU3E5__2_3(int32_t value)
	{
		___U3CxU3E5__2_3 = value;
	}
};


// Hotbar/<Adjust>d__8
struct U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E  : public RuntimeObject
{
public:
	// System.Int32 Hotbar/<Adjust>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Hotbar/<Adjust>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Hotbar Hotbar/<Adjust>d__8::<>4__this
	Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * ___U3CU3E4__this_2;
	// System.Int32 Hotbar/<Adjust>d__8::x
	int32_t ___x_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E, ___U3CU3E4__this_2)); }
	inline Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E, ___x_3)); }
	inline int32_t get_x_3() const { return ___x_3; }
	inline int32_t* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(int32_t value)
	{
		___x_3 = value;
	}
};


// Hotbar/<DelayUpdate>d__13
struct U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0  : public RuntimeObject
{
public:
	// System.Int32 Hotbar/<DelayUpdate>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Hotbar/<DelayUpdate>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 Hotbar/<DelayUpdate>d__13::x
	int32_t ___x_2;
	// Hotbar Hotbar/<DelayUpdate>d__13::<>4__this
	Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * ___U3CU3E4__this_3;
	// System.Int32 Hotbar/<DelayUpdate>d__13::<y>5__2
	int32_t ___U3CyU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0, ___x_2)); }
	inline int32_t get_x_2() const { return ___x_2; }
	inline int32_t* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(int32_t value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0, ___U3CU3E4__this_3)); }
	inline Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0, ___U3CyU3E5__2_4)); }
	inline int32_t get_U3CyU3E5__2_4() const { return ___U3CyU3E5__2_4; }
	inline int32_t* get_address_of_U3CyU3E5__2_4() { return &___U3CyU3E5__2_4; }
	inline void set_U3CyU3E5__2_4(int32_t value)
	{
		___U3CyU3E5__2_4 = value;
	}
};


// InventorySlot/<SwapItems>d__10
struct U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A  : public RuntimeObject
{
public:
	// System.Int32 InventorySlot/<SwapItems>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InventorySlot/<SwapItems>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// InventorySlot InventorySlot/<SwapItems>d__10::<>4__this
	InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * ___U3CU3E4__this_2;
	// Item InventorySlot/<SwapItems>d__10::item1
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item1_3;
	// Item InventorySlot/<SwapItems>d__10::item2
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item2_4;
	// UnityEngine.GameObject InventorySlot/<SwapItems>d__10::<par>5__2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CparU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A, ___U3CU3E4__this_2)); }
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_item1_3() { return static_cast<int32_t>(offsetof(U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A, ___item1_3)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_item1_3() const { return ___item1_3; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_item1_3() { return &___item1_3; }
	inline void set_item1_3(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___item1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item1_3), (void*)value);
	}

	inline static int32_t get_offset_of_item2_4() { return static_cast<int32_t>(offsetof(U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A, ___item2_4)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_item2_4() const { return ___item2_4; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_item2_4() { return &___item2_4; }
	inline void set_item2_4(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___item2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A, ___U3CparU3E5__2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CparU3E5__2_5() const { return ___U3CparU3E5__2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CparU3E5__2_5() { return &___U3CparU3E5__2_5; }
	inline void set_U3CparU3E5__2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CparU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CparU3E5__2_5), (void*)value);
	}
};


// Player/<RegenerateHealth>d__12
struct U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7  : public RuntimeObject
{
public:
	// System.Int32 Player/<RegenerateHealth>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<RegenerateHealth>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player/<RegenerateHealth>d__12::<>4__this
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7, ___U3CU3E4__this_2)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Player/<StartEndGame>d__10
struct U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117  : public RuntimeObject
{
public:
	// System.Int32 Player/<StartEndGame>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<StartEndGame>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player/<StartEndGame>d__10::<>4__this
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117, ___U3CU3E4__this_2)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TempDialogue/<DialogueLoop>d__12
struct U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1  : public RuntimeObject
{
public:
	// System.Int32 TempDialogue/<DialogueLoop>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TempDialogue/<DialogueLoop>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String[] TempDialogue/<DialogueLoop>d__12::dialogue
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dialogue_2;
	// TempDialogue TempDialogue/<DialogueLoop>d__12::<>4__this
	TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * ___U3CU3E4__this_3;
	// System.String[] TempDialogue/<DialogueLoop>d__12::<>7__wrap1
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CU3E7__wrap1_4;
	// System.Int32 TempDialogue/<DialogueLoop>d__12::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_dialogue_2() { return static_cast<int32_t>(offsetof(U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1, ___dialogue_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_dialogue_2() const { return ___dialogue_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_dialogue_2() { return &___dialogue_2; }
	inline void set_dialogue_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___dialogue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogue_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1, ___U3CU3E4__this_3)); }
	inline TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1, ___U3CU3E7__wrap1_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1, ___U3CU3E7__wrap2_5)); }
	inline int32_t get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(int32_t value)
	{
		___U3CU3E7__wrap2_5 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3Int
struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA 
{
public:
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}

	inline static int32_t get_offset_of_m_Z_2() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA, ___m_Z_2)); }
	inline int32_t get_m_Z_2() const { return ___m_Z_2; }
	inline int32_t* get_address_of_m_Z_2() { return &___m_Z_2; }
	inline void set_m_Z_2(int32_t value)
	{
		___m_Z_2 = value;
	}
};

struct Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields
{
public:
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___s_Back_10;

public:
	inline static int32_t get_offset_of_s_Zero_3() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Zero_3)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Zero_3() const { return ___s_Zero_3; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Zero_3() { return &___s_Zero_3; }
	inline void set_s_Zero_3(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Zero_3 = value;
	}

	inline static int32_t get_offset_of_s_One_4() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_One_4)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_One_4() const { return ___s_One_4; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_One_4() { return &___s_One_4; }
	inline void set_s_One_4(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_One_4 = value;
	}

	inline static int32_t get_offset_of_s_Up_5() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Up_5)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Up_5() const { return ___s_Up_5; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Up_5() { return &___s_Up_5; }
	inline void set_s_Up_5(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Up_5 = value;
	}

	inline static int32_t get_offset_of_s_Down_6() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Down_6)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Down_6() const { return ___s_Down_6; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Down_6() { return &___s_Down_6; }
	inline void set_s_Down_6(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Down_6 = value;
	}

	inline static int32_t get_offset_of_s_Left_7() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Left_7)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Left_7() const { return ___s_Left_7; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Left_7() { return &___s_Left_7; }
	inline void set_s_Left_7(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Left_7 = value;
	}

	inline static int32_t get_offset_of_s_Right_8() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Right_8)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Right_8() const { return ___s_Right_8; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Right_8() { return &___s_Right_8; }
	inline void set_s_Right_8(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Right_8 = value;
	}

	inline static int32_t get_offset_of_s_Forward_9() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Forward_9)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Forward_9() const { return ___s_Forward_9; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Forward_9() { return &___s_Forward_9; }
	inline void set_s_Forward_9(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Forward_9 = value;
	}

	inline static int32_t get_offset_of_s_Back_10() { return static_cast<int32_t>(offsetof(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA_StaticFields, ___s_Back_10)); }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  get_s_Back_10() const { return ___s_Back_10; }
	inline Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA * get_address_of_s_Back_10() { return &___s_Back_10; }
	inline void set_s_Back_10(Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  value)
	{
		___s_Back_10 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.FontStyle
struct FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96 
{
public:
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyle_t98609253DA79E5B3198BD60AD3518C5B6A2DCF96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HorizontalWrapMode
struct HorizontalWrapMode_tB8F0D84DB114FFAF047F10A58ADB759DEFF2AC63 
{
public:
	// System.Int32 UnityEngine.HorizontalWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalWrapMode_tB8F0D84DB114FFAF047F10A58ADB759DEFF2AC63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TextAnchor
struct TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232 
{
public:
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAnchor_tA4C88E77C2D7312F43412275B01E1341A7CB2232, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextGenerationError
struct TextGenerationError_t09DA0156E184EBDC8621B676A0927983194A08E4 
{
public:
	// System.Int32 UnityEngine.TextGenerationError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextGenerationError_t09DA0156E184EBDC8621B676A0927983194A08E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.VerticalWrapMode
struct VerticalWrapMode_t71EBBAE09D28B40254AA63D6EEA14CFCBD618D88 
{
public:
	// System.Int32 UnityEngine.VerticalWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalWrapMode_t71EBBAE09D28B40254AA63D6EEA14CFCBD618D88, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// DialogueChoice/<CloseDialogueWindow>d__20
struct U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF  : public RuntimeObject
{
public:
	// System.Int32 DialogueChoice/<CloseDialogueWindow>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogueChoice/<CloseDialogueWindow>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DialogueChoice DialogueChoice/<CloseDialogueWindow>d__20::<>4__this
	DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * ___U3CU3E4__this_2;
	// UnityEngine.SpriteRenderer DialogueChoice/<CloseDialogueWindow>d__20::<windowRenderer>5__2
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___U3CwindowRendererU3E5__2_3;
	// UnityEngine.SpriteRenderer DialogueChoice/<CloseDialogueWindow>d__20::<overlay>5__3
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___U3CoverlayU3E5__3_4;
	// UnityEngine.Vector3 DialogueChoice/<CloseDialogueWindow>d__20::<pos>5__4
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CposU3E5__4_5;
	// System.Int32 DialogueChoice/<CloseDialogueWindow>d__20::<x>5__5
	int32_t ___U3CxU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF, ___U3CU3E4__this_2)); }
	inline DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwindowRendererU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF, ___U3CwindowRendererU3E5__2_3)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_U3CwindowRendererU3E5__2_3() const { return ___U3CwindowRendererU3E5__2_3; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_U3CwindowRendererU3E5__2_3() { return &___U3CwindowRendererU3E5__2_3; }
	inline void set_U3CwindowRendererU3E5__2_3(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___U3CwindowRendererU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwindowRendererU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoverlayU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF, ___U3CoverlayU3E5__3_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_U3CoverlayU3E5__3_4() const { return ___U3CoverlayU3E5__3_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_U3CoverlayU3E5__3_4() { return &___U3CoverlayU3E5__3_4; }
	inline void set_U3CoverlayU3E5__3_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___U3CoverlayU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoverlayU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CposU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF, ___U3CposU3E5__4_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CposU3E5__4_5() const { return ___U3CposU3E5__4_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CposU3E5__4_5() { return &___U3CposU3E5__4_5; }
	inline void set_U3CposU3E5__4_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CposU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CxU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF, ___U3CxU3E5__5_6)); }
	inline int32_t get_U3CxU3E5__5_6() const { return ___U3CxU3E5__5_6; }
	inline int32_t* get_address_of_U3CxU3E5__5_6() { return &___U3CxU3E5__5_6; }
	inline void set_U3CxU3E5__5_6(int32_t value)
	{
		___U3CxU3E5__5_6 = value;
	}
};


// DialogueChoice/<OpenDialogueWindow>d__21
struct U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4  : public RuntimeObject
{
public:
	// System.Int32 DialogueChoice/<OpenDialogueWindow>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogueChoice/<OpenDialogueWindow>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DialogueChoice DialogueChoice/<OpenDialogueWindow>d__21::<>4__this
	DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * ___U3CU3E4__this_2;
	// UnityEngine.SpriteRenderer DialogueChoice/<OpenDialogueWindow>d__21::<windowRenderer>5__2
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___U3CwindowRendererU3E5__2_3;
	// UnityEngine.SpriteRenderer DialogueChoice/<OpenDialogueWindow>d__21::<overlay>5__3
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___U3CoverlayU3E5__3_4;
	// UnityEngine.Vector3 DialogueChoice/<OpenDialogueWindow>d__21::<pos>5__4
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CposU3E5__4_5;
	// System.Int32 DialogueChoice/<OpenDialogueWindow>d__21::<x>5__5
	int32_t ___U3CxU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4, ___U3CU3E4__this_2)); }
	inline DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwindowRendererU3E5__2_3() { return static_cast<int32_t>(offsetof(U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4, ___U3CwindowRendererU3E5__2_3)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_U3CwindowRendererU3E5__2_3() const { return ___U3CwindowRendererU3E5__2_3; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_U3CwindowRendererU3E5__2_3() { return &___U3CwindowRendererU3E5__2_3; }
	inline void set_U3CwindowRendererU3E5__2_3(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___U3CwindowRendererU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwindowRendererU3E5__2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoverlayU3E5__3_4() { return static_cast<int32_t>(offsetof(U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4, ___U3CoverlayU3E5__3_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_U3CoverlayU3E5__3_4() const { return ___U3CoverlayU3E5__3_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_U3CoverlayU3E5__3_4() { return &___U3CoverlayU3E5__3_4; }
	inline void set_U3CoverlayU3E5__3_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___U3CoverlayU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoverlayU3E5__3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CposU3E5__4_5() { return static_cast<int32_t>(offsetof(U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4, ___U3CposU3E5__4_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CposU3E5__4_5() const { return ___U3CposU3E5__4_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CposU3E5__4_5() { return &___U3CposU3E5__4_5; }
	inline void set_U3CposU3E5__4_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CposU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CxU3E5__5_6() { return static_cast<int32_t>(offsetof(U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4, ___U3CxU3E5__5_6)); }
	inline int32_t get_U3CxU3E5__5_6() const { return ___U3CxU3E5__5_6; }
	inline int32_t* get_address_of_U3CxU3E5__5_6() { return &___U3CxU3E5__5_6; }
	inline void set_U3CxU3E5__5_6(int32_t value)
	{
		___U3CxU3E5__5_6 = value;
	}
};


// DialogueChoice/<ShiftWindowRight>d__19
struct U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783  : public RuntimeObject
{
public:
	// System.Int32 DialogueChoice/<ShiftWindowRight>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogueChoice/<ShiftWindowRight>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DialogueChoice DialogueChoice/<ShiftWindowRight>d__19::<>4__this
	DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 DialogueChoice/<ShiftWindowRight>d__19::<pos>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CposU3E5__2_3;
	// System.Int32 DialogueChoice/<ShiftWindowRight>d__19::<x>5__3
	int32_t ___U3CxU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783, ___U3CU3E4__this_2)); }
	inline DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CposU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783, ___U3CposU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CposU3E5__2_3() const { return ___U3CposU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CposU3E5__2_3() { return &___U3CposU3E5__2_3; }
	inline void set_U3CposU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CposU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CxU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783, ___U3CxU3E5__3_4)); }
	inline int32_t get_U3CxU3E5__3_4() const { return ___U3CxU3E5__3_4; }
	inline int32_t* get_address_of_U3CxU3E5__3_4() { return &___U3CxU3E5__3_4; }
	inline void set_U3CxU3E5__3_4(int32_t value)
	{
		___U3CxU3E5__3_4 = value;
	}
};


// InventorySlot/<SizeShift>d__14
struct U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B  : public RuntimeObject
{
public:
	// System.Int32 InventorySlot/<SizeShift>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object InventorySlot/<SizeShift>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// InventorySlot InventorySlot/<SizeShift>d__14::<>4__this
	InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 InventorySlot/<SizeShift>d__14::newSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newSize_3;
	// UnityEngine.RectTransform InventorySlot/<SizeShift>d__14::<x>5__2
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___U3CxU3E5__2_4;
	// System.Int32 InventorySlot/<SizeShift>d__14::<a>5__3
	int32_t ___U3CaU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B, ___U3CU3E4__this_2)); }
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_newSize_3() { return static_cast<int32_t>(offsetof(U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B, ___newSize_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_newSize_3() const { return ___newSize_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_newSize_3() { return &___newSize_3; }
	inline void set_newSize_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___newSize_3 = value;
	}

	inline static int32_t get_offset_of_U3CxU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B, ___U3CxU3E5__2_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_U3CxU3E5__2_4() const { return ___U3CxU3E5__2_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_U3CxU3E5__2_4() { return &___U3CxU3E5__2_4; }
	inline void set_U3CxU3E5__2_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___U3CxU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CxU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B, ___U3CaU3E5__3_5)); }
	inline int32_t get_U3CaU3E5__3_5() const { return ___U3CaU3E5__3_5; }
	inline int32_t* get_address_of_U3CaU3E5__3_5() { return &___U3CaU3E5__3_5; }
	inline void set_U3CaU3E5__3_5(int32_t value)
	{
		___U3CaU3E5__3_5 = value;
	}
};


// Item/<CoolItemEffectStuffz>d__10
struct U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269  : public RuntimeObject
{
public:
	// System.Int32 Item/<CoolItemEffectStuffz>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Item/<CoolItemEffectStuffz>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Item Item/<CoolItemEffectStuffz>d__10::<>4__this
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Item/<CoolItemEffectStuffz>d__10::<pos1>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cpos1U3E5__2_3;
	// UnityEngine.Vector3 Item/<CoolItemEffectStuffz>d__10::<pos2>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cpos2U3E5__3_4;
	// System.Single Item/<CoolItemEffectStuffz>d__10::<rot1>5__4
	float ___U3Crot1U3E5__4_5;
	// System.Single Item/<CoolItemEffectStuffz>d__10::<rot2>5__5
	float ___U3Crot2U3E5__5_6;
	// System.Int32 Item/<CoolItemEffectStuffz>d__10::<x>5__6
	int32_t ___U3CxU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269, ___U3CU3E4__this_2)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cpos1U3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269, ___U3Cpos1U3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Cpos1U3E5__2_3() const { return ___U3Cpos1U3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Cpos1U3E5__2_3() { return &___U3Cpos1U3E5__2_3; }
	inline void set_U3Cpos1U3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Cpos1U3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3Cpos2U3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269, ___U3Cpos2U3E5__3_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Cpos2U3E5__3_4() const { return ___U3Cpos2U3E5__3_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Cpos2U3E5__3_4() { return &___U3Cpos2U3E5__3_4; }
	inline void set_U3Cpos2U3E5__3_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Cpos2U3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3Crot1U3E5__4_5() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269, ___U3Crot1U3E5__4_5)); }
	inline float get_U3Crot1U3E5__4_5() const { return ___U3Crot1U3E5__4_5; }
	inline float* get_address_of_U3Crot1U3E5__4_5() { return &___U3Crot1U3E5__4_5; }
	inline void set_U3Crot1U3E5__4_5(float value)
	{
		___U3Crot1U3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3Crot2U3E5__5_6() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269, ___U3Crot2U3E5__5_6)); }
	inline float get_U3Crot2U3E5__5_6() const { return ___U3Crot2U3E5__5_6; }
	inline float* get_address_of_U3Crot2U3E5__5_6() { return &___U3Crot2U3E5__5_6; }
	inline void set_U3Crot2U3E5__5_6(float value)
	{
		___U3Crot2U3E5__5_6 = value;
	}

	inline static int32_t get_offset_of_U3CxU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269, ___U3CxU3E5__6_7)); }
	inline int32_t get_U3CxU3E5__6_7() const { return ___U3CxU3E5__6_7; }
	inline int32_t* get_address_of_U3CxU3E5__6_7() { return &___U3CxU3E5__6_7; }
	inline void set_U3CxU3E5__6_7(int32_t value)
	{
		___U3CxU3E5__6_7 = value;
	}
};


// Item/<PlayerCollect>d__7
struct U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791  : public RuntimeObject
{
public:
	// System.Int32 Item/<PlayerCollect>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Item/<PlayerCollect>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Item Item/<PlayerCollect>d__7::<>4__this
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Item/<PlayerCollect>d__7::<x>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CxU3E5__2_3;
	// System.Int32 Item/<PlayerCollect>d__7::<y>5__3
	int32_t ___U3CyU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791, ___U3CU3E4__this_2)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CxU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791, ___U3CxU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CxU3E5__2_3() const { return ___U3CxU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CxU3E5__2_3() { return &___U3CxU3E5__2_3; }
	inline void set_U3CxU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CxU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CyU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791, ___U3CyU3E5__3_4)); }
	inline int32_t get_U3CyU3E5__3_4() const { return ___U3CyU3E5__3_4; }
	inline int32_t* get_address_of_U3CyU3E5__3_4() { return &___U3CyU3E5__3_4; }
	inline void set_U3CyU3E5__3_4(int32_t value)
	{
		___U3CyU3E5__3_4 = value;
	}
};


// ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1
struct U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1  : public RuntimeObject
{
public:
	// System.Int32 ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ItemObjectCoolEffect ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::<>4__this
	ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::<pos1>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cpos1U3E5__2_3;
	// UnityEngine.Vector3 ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::<pos2>5__3
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3Cpos2U3E5__3_4;
	// System.Single ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::<rot1>5__4
	float ___U3Crot1U3E5__4_5;
	// System.Single ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::<rot2>5__5
	float ___U3Crot2U3E5__5_6;
	// System.Int32 ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::<x>5__6
	int32_t ___U3CxU3E5__6_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1, ___U3CU3E4__this_2)); }
	inline ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3Cpos1U3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1, ___U3Cpos1U3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Cpos1U3E5__2_3() const { return ___U3Cpos1U3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Cpos1U3E5__2_3() { return &___U3Cpos1U3E5__2_3; }
	inline void set_U3Cpos1U3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Cpos1U3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3Cpos2U3E5__3_4() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1, ___U3Cpos2U3E5__3_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3Cpos2U3E5__3_4() const { return ___U3Cpos2U3E5__3_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3Cpos2U3E5__3_4() { return &___U3Cpos2U3E5__3_4; }
	inline void set_U3Cpos2U3E5__3_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3Cpos2U3E5__3_4 = value;
	}

	inline static int32_t get_offset_of_U3Crot1U3E5__4_5() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1, ___U3Crot1U3E5__4_5)); }
	inline float get_U3Crot1U3E5__4_5() const { return ___U3Crot1U3E5__4_5; }
	inline float* get_address_of_U3Crot1U3E5__4_5() { return &___U3Crot1U3E5__4_5; }
	inline void set_U3Crot1U3E5__4_5(float value)
	{
		___U3Crot1U3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3Crot2U3E5__5_6() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1, ___U3Crot2U3E5__5_6)); }
	inline float get_U3Crot2U3E5__5_6() const { return ___U3Crot2U3E5__5_6; }
	inline float* get_address_of_U3Crot2U3E5__5_6() { return &___U3Crot2U3E5__5_6; }
	inline void set_U3Crot2U3E5__5_6(float value)
	{
		___U3Crot2U3E5__5_6 = value;
	}

	inline static int32_t get_offset_of_U3CxU3E5__6_7() { return static_cast<int32_t>(offsetof(U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1, ___U3CxU3E5__6_7)); }
	inline int32_t get_U3CxU3E5__6_7() const { return ___U3CxU3E5__6_7; }
	inline int32_t* get_address_of_U3CxU3E5__6_7() { return &___U3CxU3E5__6_7; }
	inline void set_U3CxU3E5__6_7(int32_t value)
	{
		___U3CxU3E5__6_7 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Tilemaps.Tile/ColliderType
struct ColliderType_tB8E55E3EB1D378726420E99E6F7646DC119923FB 
{
public:
	// System.Int32 UnityEngine.Tilemaps.Tile/ColliderType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColliderType_tB8E55E3EB1D378726420E99E6F7646DC119923FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A 
{
public:
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;

public:
	inline static int32_t get_offset_of_font_0() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___font_0)); }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * get_font_0() const { return ___font_0; }
	inline Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 ** get_address_of_font_0() { return &___font_0; }
	inline void set_font_0(Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * value)
	{
		___font_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___font_0), (void*)value);
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_fontSize_2() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___fontSize_2)); }
	inline int32_t get_fontSize_2() const { return ___fontSize_2; }
	inline int32_t* get_address_of_fontSize_2() { return &___fontSize_2; }
	inline void set_fontSize_2(int32_t value)
	{
		___fontSize_2 = value;
	}

	inline static int32_t get_offset_of_lineSpacing_3() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___lineSpacing_3)); }
	inline float get_lineSpacing_3() const { return ___lineSpacing_3; }
	inline float* get_address_of_lineSpacing_3() { return &___lineSpacing_3; }
	inline void set_lineSpacing_3(float value)
	{
		___lineSpacing_3 = value;
	}

	inline static int32_t get_offset_of_richText_4() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___richText_4)); }
	inline bool get_richText_4() const { return ___richText_4; }
	inline bool* get_address_of_richText_4() { return &___richText_4; }
	inline void set_richText_4(bool value)
	{
		___richText_4 = value;
	}

	inline static int32_t get_offset_of_scaleFactor_5() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___scaleFactor_5)); }
	inline float get_scaleFactor_5() const { return ___scaleFactor_5; }
	inline float* get_address_of_scaleFactor_5() { return &___scaleFactor_5; }
	inline void set_scaleFactor_5(float value)
	{
		___scaleFactor_5 = value;
	}

	inline static int32_t get_offset_of_fontStyle_6() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___fontStyle_6)); }
	inline int32_t get_fontStyle_6() const { return ___fontStyle_6; }
	inline int32_t* get_address_of_fontStyle_6() { return &___fontStyle_6; }
	inline void set_fontStyle_6(int32_t value)
	{
		___fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_textAnchor_7() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___textAnchor_7)); }
	inline int32_t get_textAnchor_7() const { return ___textAnchor_7; }
	inline int32_t* get_address_of_textAnchor_7() { return &___textAnchor_7; }
	inline void set_textAnchor_7(int32_t value)
	{
		___textAnchor_7 = value;
	}

	inline static int32_t get_offset_of_alignByGeometry_8() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___alignByGeometry_8)); }
	inline bool get_alignByGeometry_8() const { return ___alignByGeometry_8; }
	inline bool* get_address_of_alignByGeometry_8() { return &___alignByGeometry_8; }
	inline void set_alignByGeometry_8(bool value)
	{
		___alignByGeometry_8 = value;
	}

	inline static int32_t get_offset_of_resizeTextForBestFit_9() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___resizeTextForBestFit_9)); }
	inline bool get_resizeTextForBestFit_9() const { return ___resizeTextForBestFit_9; }
	inline bool* get_address_of_resizeTextForBestFit_9() { return &___resizeTextForBestFit_9; }
	inline void set_resizeTextForBestFit_9(bool value)
	{
		___resizeTextForBestFit_9 = value;
	}

	inline static int32_t get_offset_of_resizeTextMinSize_10() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___resizeTextMinSize_10)); }
	inline int32_t get_resizeTextMinSize_10() const { return ___resizeTextMinSize_10; }
	inline int32_t* get_address_of_resizeTextMinSize_10() { return &___resizeTextMinSize_10; }
	inline void set_resizeTextMinSize_10(int32_t value)
	{
		___resizeTextMinSize_10 = value;
	}

	inline static int32_t get_offset_of_resizeTextMaxSize_11() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___resizeTextMaxSize_11)); }
	inline int32_t get_resizeTextMaxSize_11() const { return ___resizeTextMaxSize_11; }
	inline int32_t* get_address_of_resizeTextMaxSize_11() { return &___resizeTextMaxSize_11; }
	inline void set_resizeTextMaxSize_11(int32_t value)
	{
		___resizeTextMaxSize_11 = value;
	}

	inline static int32_t get_offset_of_updateBounds_12() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___updateBounds_12)); }
	inline bool get_updateBounds_12() const { return ___updateBounds_12; }
	inline bool* get_address_of_updateBounds_12() { return &___updateBounds_12; }
	inline void set_updateBounds_12(bool value)
	{
		___updateBounds_12 = value;
	}

	inline static int32_t get_offset_of_verticalOverflow_13() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___verticalOverflow_13)); }
	inline int32_t get_verticalOverflow_13() const { return ___verticalOverflow_13; }
	inline int32_t* get_address_of_verticalOverflow_13() { return &___verticalOverflow_13; }
	inline void set_verticalOverflow_13(int32_t value)
	{
		___verticalOverflow_13 = value;
	}

	inline static int32_t get_offset_of_horizontalOverflow_14() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___horizontalOverflow_14)); }
	inline int32_t get_horizontalOverflow_14() const { return ___horizontalOverflow_14; }
	inline int32_t* get_address_of_horizontalOverflow_14() { return &___horizontalOverflow_14; }
	inline void set_horizontalOverflow_14(int32_t value)
	{
		___horizontalOverflow_14 = value;
	}

	inline static int32_t get_offset_of_generationExtents_15() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___generationExtents_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_generationExtents_15() const { return ___generationExtents_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_generationExtents_15() { return &___generationExtents_15; }
	inline void set_generationExtents_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___generationExtents_15 = value;
	}

	inline static int32_t get_offset_of_pivot_16() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___pivot_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_pivot_16() const { return ___pivot_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_pivot_16() { return &___pivot_16; }
	inline void set_pivot_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___pivot_16 = value;
	}

	inline static int32_t get_offset_of_generateOutOfBounds_17() { return static_cast<int32_t>(offsetof(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A, ___generateOutOfBounds_17)); }
	inline bool get_generateOutOfBounds_17() const { return ___generateOutOfBounds_17; }
	inline bool* get_address_of_generateOutOfBounds_17() { return &___generateOutOfBounds_17; }
	inline void set_generateOutOfBounds_17(bool value)
	{
		___generateOutOfBounds_17 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshaled_pinvoke
{
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___generationExtents_15;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshaled_com
{
	Font_tB53D3F362CB1A0B92307B362826F212AE2D2A6A9 * ___font_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___generationExtents_15;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A  ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_LastString_1() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_LastString_1)); }
	inline String_t* get_m_LastString_1() const { return ___m_LastString_1; }
	inline String_t** get_address_of_m_LastString_1() { return &___m_LastString_1; }
	inline void set_m_LastString_1(String_t* value)
	{
		___m_LastString_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LastString_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastSettings_2() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_LastSettings_2)); }
	inline TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A  get_m_LastSettings_2() const { return ___m_LastSettings_2; }
	inline TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A * get_address_of_m_LastSettings_2() { return &___m_LastSettings_2; }
	inline void set_m_LastSettings_2(TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A  value)
	{
		___m_LastSettings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LastSettings_2))->___font_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HasGenerated_3() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_HasGenerated_3)); }
	inline bool get_m_HasGenerated_3() const { return ___m_HasGenerated_3; }
	inline bool* get_address_of_m_HasGenerated_3() { return &___m_HasGenerated_3; }
	inline void set_m_HasGenerated_3(bool value)
	{
		___m_HasGenerated_3 = value;
	}

	inline static int32_t get_offset_of_m_LastValid_4() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_LastValid_4)); }
	inline int32_t get_m_LastValid_4() const { return ___m_LastValid_4; }
	inline int32_t* get_address_of_m_LastValid_4() { return &___m_LastValid_4; }
	inline void set_m_LastValid_4(int32_t value)
	{
		___m_LastValid_4 = value;
	}

	inline static int32_t get_offset_of_m_Verts_5() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_Verts_5)); }
	inline List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * get_m_Verts_5() const { return ___m_Verts_5; }
	inline List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F ** get_address_of_m_Verts_5() { return &___m_Verts_5; }
	inline void set_m_Verts_5(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * value)
	{
		___m_Verts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Verts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Characters_6() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_Characters_6)); }
	inline List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * get_m_Characters_6() const { return ___m_Characters_6; }
	inline List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D ** get_address_of_m_Characters_6() { return &___m_Characters_6; }
	inline void set_m_Characters_6(List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * value)
	{
		___m_Characters_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Characters_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Lines_7() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_Lines_7)); }
	inline List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * get_m_Lines_7() const { return ___m_Lines_7; }
	inline List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB ** get_address_of_m_Lines_7() { return &___m_Lines_7; }
	inline void set_m_Lines_7(List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * value)
	{
		___m_Lines_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lines_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedVerts_8() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_CachedVerts_8)); }
	inline bool get_m_CachedVerts_8() const { return ___m_CachedVerts_8; }
	inline bool* get_address_of_m_CachedVerts_8() { return &___m_CachedVerts_8; }
	inline void set_m_CachedVerts_8(bool value)
	{
		___m_CachedVerts_8 = value;
	}

	inline static int32_t get_offset_of_m_CachedCharacters_9() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_CachedCharacters_9)); }
	inline bool get_m_CachedCharacters_9() const { return ___m_CachedCharacters_9; }
	inline bool* get_address_of_m_CachedCharacters_9() { return &___m_CachedCharacters_9; }
	inline void set_m_CachedCharacters_9(bool value)
	{
		___m_CachedCharacters_9 = value;
	}

	inline static int32_t get_offset_of_m_CachedLines_10() { return static_cast<int32_t>(offsetof(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70, ___m_CachedLines_10)); }
	inline bool get_m_CachedLines_10() const { return ___m_CachedLines_10; }
	inline bool* get_address_of_m_CachedLines_10() { return &___m_CachedLines_10; }
	inline void set_m_CachedLines_10(bool value)
	{
		___m_CachedLines_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___m_Verts_5;
	List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * ___m_Characters_6;
	List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_tAD927E4DCB8644B1B2BB810B5FB13C90B753898A_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F * ___m_Verts_5;
	List_1_t6D5A50DDC9282F1B1127D04D53FD5A743391289D * ___m_Characters_6;
	List_1_tE41795D86BBD10D66F8F64CC87147539BC5AB2EB * ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};

// UnityEngine.Tilemaps.TileBase
struct TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.GridLayout
struct GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.LineRenderer
struct LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.RuleTile
struct RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0  : public TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052
{
public:
	// UnityEngine.Sprite UnityEngine.RuleTile::m_DefaultSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DefaultSprite_4;
	// UnityEngine.GameObject UnityEngine.RuleTile::m_DefaultGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_DefaultGameObject_5;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.RuleTile::m_DefaultColliderType
	int32_t ___m_DefaultColliderType_6;
	// System.Collections.Generic.List`1<UnityEngine.RuleTile/TilingRule> UnityEngine.RuleTile::m_TilingRules
	List_1_t577AC7F2FB5A90794D3428EB3F57B4785DD568ED * ___m_TilingRules_7;
	// System.Collections.Generic.HashSet`1<UnityEngine.Vector3Int> UnityEngine.RuleTile::m_NeighborPositions
	HashSet_1_t38F6C53CFC4F08A5BEC5C074287FD2E68131EDAB * ___m_NeighborPositions_8;

public:
	inline static int32_t get_offset_of_m_DefaultSprite_4() { return static_cast<int32_t>(offsetof(RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0, ___m_DefaultSprite_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DefaultSprite_4() const { return ___m_DefaultSprite_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DefaultSprite_4() { return &___m_DefaultSprite_4; }
	inline void set_m_DefaultSprite_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DefaultSprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultSprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultGameObject_5() { return static_cast<int32_t>(offsetof(RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0, ___m_DefaultGameObject_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_DefaultGameObject_5() const { return ___m_DefaultGameObject_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_DefaultGameObject_5() { return &___m_DefaultGameObject_5; }
	inline void set_m_DefaultGameObject_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_DefaultGameObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultGameObject_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultColliderType_6() { return static_cast<int32_t>(offsetof(RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0, ___m_DefaultColliderType_6)); }
	inline int32_t get_m_DefaultColliderType_6() const { return ___m_DefaultColliderType_6; }
	inline int32_t* get_address_of_m_DefaultColliderType_6() { return &___m_DefaultColliderType_6; }
	inline void set_m_DefaultColliderType_6(int32_t value)
	{
		___m_DefaultColliderType_6 = value;
	}

	inline static int32_t get_offset_of_m_TilingRules_7() { return static_cast<int32_t>(offsetof(RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0, ___m_TilingRules_7)); }
	inline List_1_t577AC7F2FB5A90794D3428EB3F57B4785DD568ED * get_m_TilingRules_7() const { return ___m_TilingRules_7; }
	inline List_1_t577AC7F2FB5A90794D3428EB3F57B4785DD568ED ** get_address_of_m_TilingRules_7() { return &___m_TilingRules_7; }
	inline void set_m_TilingRules_7(List_1_t577AC7F2FB5A90794D3428EB3F57B4785DD568ED * value)
	{
		___m_TilingRules_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TilingRules_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeighborPositions_8() { return static_cast<int32_t>(offsetof(RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0, ___m_NeighborPositions_8)); }
	inline HashSet_1_t38F6C53CFC4F08A5BEC5C074287FD2E68131EDAB * get_m_NeighborPositions_8() const { return ___m_NeighborPositions_8; }
	inline HashSet_1_t38F6C53CFC4F08A5BEC5C074287FD2E68131EDAB ** get_address_of_m_NeighborPositions_8() { return &___m_NeighborPositions_8; }
	inline void set_m_NeighborPositions_8(HashSet_1_t38F6C53CFC4F08A5BEC5C074287FD2E68131EDAB * value)
	{
		___m_NeighborPositions_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NeighborPositions_8), (void*)value);
	}
};

struct RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Tilemaps.Tilemap,System.Collections.Generic.KeyValuePair`2<System.Collections.Generic.HashSet`1<UnityEngine.Tilemaps.TileBase>,System.Collections.Generic.HashSet`1<UnityEngine.Vector3Int>>> UnityEngine.RuleTile::m_CacheTilemapsNeighborPositions
	Dictionary_2_t37D9456BBAA3F833E06AECA6A91937320081C2EC * ___m_CacheTilemapsNeighborPositions_9;
	// UnityEngine.Tilemaps.TileBase[] UnityEngine.RuleTile::m_AllocatedUsedTileArr
	TileBaseU5BU5D_t9D113C5AC37048FAC6A25181181921FC203459E7* ___m_AllocatedUsedTileArr_10;

public:
	inline static int32_t get_offset_of_m_CacheTilemapsNeighborPositions_9() { return static_cast<int32_t>(offsetof(RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0_StaticFields, ___m_CacheTilemapsNeighborPositions_9)); }
	inline Dictionary_2_t37D9456BBAA3F833E06AECA6A91937320081C2EC * get_m_CacheTilemapsNeighborPositions_9() const { return ___m_CacheTilemapsNeighborPositions_9; }
	inline Dictionary_2_t37D9456BBAA3F833E06AECA6A91937320081C2EC ** get_address_of_m_CacheTilemapsNeighborPositions_9() { return &___m_CacheTilemapsNeighborPositions_9; }
	inline void set_m_CacheTilemapsNeighborPositions_9(Dictionary_2_t37D9456BBAA3F833E06AECA6A91937320081C2EC * value)
	{
		___m_CacheTilemapsNeighborPositions_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheTilemapsNeighborPositions_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_AllocatedUsedTileArr_10() { return static_cast<int32_t>(offsetof(RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0_StaticFields, ___m_AllocatedUsedTileArr_10)); }
	inline TileBaseU5BU5D_t9D113C5AC37048FAC6A25181181921FC203459E7* get_m_AllocatedUsedTileArr_10() const { return ___m_AllocatedUsedTileArr_10; }
	inline TileBaseU5BU5D_t9D113C5AC37048FAC6A25181181921FC203459E7** get_address_of_m_AllocatedUsedTileArr_10() { return &___m_AllocatedUsedTileArr_10; }
	inline void set_m_AllocatedUsedTileArr_10(TileBaseU5BU5D_t9D113C5AC37048FAC6A25181181921FC203459E7* value)
	{
		___m_AllocatedUsedTileArr_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllocatedUsedTileArr_10), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// AttackScript
struct AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.LineRenderer AttackScript::LR
	LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * ___LR_4;
	// System.Boolean AttackScript::canShoot
	bool ___canShoot_5;
	// System.Boolean AttackScript::canMelee
	bool ___canMelee_6;
	// UnityEngine.Animator AttackScript::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_7;
	// UnityEngine.GameObject AttackScript::bat
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bat_8;
	// UnityEngine.SpriteRenderer AttackScript::batSR
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___batSR_9;
	// UnityEngine.LayerMask AttackScript::layerEntities
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerEntities_10;
	// UnityEngine.GameObject AttackScript::hotbar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hotbar_11;
	// System.Int32 AttackScript::range
	int32_t ___range_12;
	// UnityEngine.Vector2 AttackScript::mousePos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mousePos_13;
	// Entity AttackScript::entity
	Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * ___entity_14;
	// Player AttackScript::PS
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___PS_15;
	// System.Single AttackScript::weaponCooldown
	float ___weaponCooldown_16;
	// UnityEngine.AudioSource AttackScript::AS
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___AS_17;
	// UnityEngine.AudioClip[] AttackScript::batAttackSounds
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___batAttackSounds_18;
	// UnityEngine.AudioClip AttackScript::swingSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___swingSound_19;

public:
	inline static int32_t get_offset_of_LR_4() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___LR_4)); }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * get_LR_4() const { return ___LR_4; }
	inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 ** get_address_of_LR_4() { return &___LR_4; }
	inline void set_LR_4(LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * value)
	{
		___LR_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LR_4), (void*)value);
	}

	inline static int32_t get_offset_of_canShoot_5() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___canShoot_5)); }
	inline bool get_canShoot_5() const { return ___canShoot_5; }
	inline bool* get_address_of_canShoot_5() { return &___canShoot_5; }
	inline void set_canShoot_5(bool value)
	{
		___canShoot_5 = value;
	}

	inline static int32_t get_offset_of_canMelee_6() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___canMelee_6)); }
	inline bool get_canMelee_6() const { return ___canMelee_6; }
	inline bool* get_address_of_canMelee_6() { return &___canMelee_6; }
	inline void set_canMelee_6(bool value)
	{
		___canMelee_6 = value;
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___anim_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_7() const { return ___anim_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_7), (void*)value);
	}

	inline static int32_t get_offset_of_bat_8() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___bat_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bat_8() const { return ___bat_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bat_8() { return &___bat_8; }
	inline void set_bat_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bat_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bat_8), (void*)value);
	}

	inline static int32_t get_offset_of_batSR_9() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___batSR_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_batSR_9() const { return ___batSR_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_batSR_9() { return &___batSR_9; }
	inline void set_batSR_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___batSR_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___batSR_9), (void*)value);
	}

	inline static int32_t get_offset_of_layerEntities_10() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___layerEntities_10)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_layerEntities_10() const { return ___layerEntities_10; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_layerEntities_10() { return &___layerEntities_10; }
	inline void set_layerEntities_10(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___layerEntities_10 = value;
	}

	inline static int32_t get_offset_of_hotbar_11() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___hotbar_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hotbar_11() const { return ___hotbar_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hotbar_11() { return &___hotbar_11; }
	inline void set_hotbar_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hotbar_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hotbar_11), (void*)value);
	}

	inline static int32_t get_offset_of_range_12() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___range_12)); }
	inline int32_t get_range_12() const { return ___range_12; }
	inline int32_t* get_address_of_range_12() { return &___range_12; }
	inline void set_range_12(int32_t value)
	{
		___range_12 = value;
	}

	inline static int32_t get_offset_of_mousePos_13() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___mousePos_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mousePos_13() const { return ___mousePos_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mousePos_13() { return &___mousePos_13; }
	inline void set_mousePos_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mousePos_13 = value;
	}

	inline static int32_t get_offset_of_entity_14() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___entity_14)); }
	inline Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * get_entity_14() const { return ___entity_14; }
	inline Entity_t044863A7B37E4AD27CE78D4B680109A139080095 ** get_address_of_entity_14() { return &___entity_14; }
	inline void set_entity_14(Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * value)
	{
		___entity_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entity_14), (void*)value);
	}

	inline static int32_t get_offset_of_PS_15() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___PS_15)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_PS_15() const { return ___PS_15; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_PS_15() { return &___PS_15; }
	inline void set_PS_15(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___PS_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PS_15), (void*)value);
	}

	inline static int32_t get_offset_of_weaponCooldown_16() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___weaponCooldown_16)); }
	inline float get_weaponCooldown_16() const { return ___weaponCooldown_16; }
	inline float* get_address_of_weaponCooldown_16() { return &___weaponCooldown_16; }
	inline void set_weaponCooldown_16(float value)
	{
		___weaponCooldown_16 = value;
	}

	inline static int32_t get_offset_of_AS_17() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___AS_17)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_AS_17() const { return ___AS_17; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_AS_17() { return &___AS_17; }
	inline void set_AS_17(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___AS_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AS_17), (void*)value);
	}

	inline static int32_t get_offset_of_batAttackSounds_18() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___batAttackSounds_18)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_batAttackSounds_18() const { return ___batAttackSounds_18; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_batAttackSounds_18() { return &___batAttackSounds_18; }
	inline void set_batAttackSounds_18(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___batAttackSounds_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___batAttackSounds_18), (void*)value);
	}

	inline static int32_t get_offset_of_swingSound_19() { return static_cast<int32_t>(offsetof(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46, ___swingSound_19)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_swingSound_19() const { return ___swingSound_19; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_swingSound_19() { return &___swingSound_19; }
	inline void set_swingSound_19(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___swingSound_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swingSound_19), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BuildScript
struct BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 BuildScript::mousePos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mousePos_4;
	// UnityEngine.Vector2 BuildScript::roundedPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___roundedPos_5;
	// UnityEngine.GameObject BuildScript::stamp
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___stamp_6;
	// System.Single BuildScript::gridDiameter
	float ___gridDiameter_7;
	// UnityEngine.GameObject BuildScript::playerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerObject_8;
	// UnityEngine.SpriteRenderer BuildScript::sr
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sr_9;
	// UnityEngine.Tilemaps.Tilemap BuildScript::tm
	Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * ___tm_10;
	// UnityEngine.RuleTile BuildScript::stoneBlock
	RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0 * ___stoneBlock_11;
	// UnityEngine.Color BuildScript::occColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___occColor_12;
	// UnityEngine.Color BuildScript::empColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___empColor_13;
	// UnityEngine.GameObject BuildScript::hotbar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hotbar_14;
	// BuildingBlock BuildScript::block
	BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * ___block_15;
	// System.Single BuildScript::mineCoolDown
	float ___mineCoolDown_16;
	// System.Single BuildScript::mineTime
	float ___mineTime_17;
	// UnityEngine.AudioSource BuildScript::AS
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___AS_18;
	// UnityEngine.AudioClip BuildScript::blockHit
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___blockHit_19;
	// UnityEngine.AudioClip BuildScript::blockBreak
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___blockBreak_20;
	// UnityEngine.AudioClip BuildScript::blockPlace
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___blockPlace_21;

public:
	inline static int32_t get_offset_of_mousePos_4() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___mousePos_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mousePos_4() const { return ___mousePos_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mousePos_4() { return &___mousePos_4; }
	inline void set_mousePos_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mousePos_4 = value;
	}

	inline static int32_t get_offset_of_roundedPos_5() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___roundedPos_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_roundedPos_5() const { return ___roundedPos_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_roundedPos_5() { return &___roundedPos_5; }
	inline void set_roundedPos_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___roundedPos_5 = value;
	}

	inline static int32_t get_offset_of_stamp_6() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___stamp_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_stamp_6() const { return ___stamp_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_stamp_6() { return &___stamp_6; }
	inline void set_stamp_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___stamp_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stamp_6), (void*)value);
	}

	inline static int32_t get_offset_of_gridDiameter_7() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___gridDiameter_7)); }
	inline float get_gridDiameter_7() const { return ___gridDiameter_7; }
	inline float* get_address_of_gridDiameter_7() { return &___gridDiameter_7; }
	inline void set_gridDiameter_7(float value)
	{
		___gridDiameter_7 = value;
	}

	inline static int32_t get_offset_of_playerObject_8() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___playerObject_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerObject_8() const { return ___playerObject_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerObject_8() { return &___playerObject_8; }
	inline void set_playerObject_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerObject_8), (void*)value);
	}

	inline static int32_t get_offset_of_sr_9() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___sr_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sr_9() const { return ___sr_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sr_9() { return &___sr_9; }
	inline void set_sr_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sr_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_9), (void*)value);
	}

	inline static int32_t get_offset_of_tm_10() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___tm_10)); }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * get_tm_10() const { return ___tm_10; }
	inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 ** get_address_of_tm_10() { return &___tm_10; }
	inline void set_tm_10(Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * value)
	{
		___tm_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tm_10), (void*)value);
	}

	inline static int32_t get_offset_of_stoneBlock_11() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___stoneBlock_11)); }
	inline RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0 * get_stoneBlock_11() const { return ___stoneBlock_11; }
	inline RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0 ** get_address_of_stoneBlock_11() { return &___stoneBlock_11; }
	inline void set_stoneBlock_11(RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0 * value)
	{
		___stoneBlock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stoneBlock_11), (void*)value);
	}

	inline static int32_t get_offset_of_occColor_12() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___occColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_occColor_12() const { return ___occColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_occColor_12() { return &___occColor_12; }
	inline void set_occColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___occColor_12 = value;
	}

	inline static int32_t get_offset_of_empColor_13() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___empColor_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_empColor_13() const { return ___empColor_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_empColor_13() { return &___empColor_13; }
	inline void set_empColor_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___empColor_13 = value;
	}

	inline static int32_t get_offset_of_hotbar_14() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___hotbar_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hotbar_14() const { return ___hotbar_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hotbar_14() { return &___hotbar_14; }
	inline void set_hotbar_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hotbar_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hotbar_14), (void*)value);
	}

	inline static int32_t get_offset_of_block_15() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___block_15)); }
	inline BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * get_block_15() const { return ___block_15; }
	inline BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 ** get_address_of_block_15() { return &___block_15; }
	inline void set_block_15(BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * value)
	{
		___block_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___block_15), (void*)value);
	}

	inline static int32_t get_offset_of_mineCoolDown_16() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___mineCoolDown_16)); }
	inline float get_mineCoolDown_16() const { return ___mineCoolDown_16; }
	inline float* get_address_of_mineCoolDown_16() { return &___mineCoolDown_16; }
	inline void set_mineCoolDown_16(float value)
	{
		___mineCoolDown_16 = value;
	}

	inline static int32_t get_offset_of_mineTime_17() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___mineTime_17)); }
	inline float get_mineTime_17() const { return ___mineTime_17; }
	inline float* get_address_of_mineTime_17() { return &___mineTime_17; }
	inline void set_mineTime_17(float value)
	{
		___mineTime_17 = value;
	}

	inline static int32_t get_offset_of_AS_18() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___AS_18)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_AS_18() const { return ___AS_18; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_AS_18() { return &___AS_18; }
	inline void set_AS_18(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___AS_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AS_18), (void*)value);
	}

	inline static int32_t get_offset_of_blockHit_19() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___blockHit_19)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_blockHit_19() const { return ___blockHit_19; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_blockHit_19() { return &___blockHit_19; }
	inline void set_blockHit_19(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___blockHit_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockHit_19), (void*)value);
	}

	inline static int32_t get_offset_of_blockBreak_20() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___blockBreak_20)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_blockBreak_20() const { return ___blockBreak_20; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_blockBreak_20() { return &___blockBreak_20; }
	inline void set_blockBreak_20(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___blockBreak_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockBreak_20), (void*)value);
	}

	inline static int32_t get_offset_of_blockPlace_21() { return static_cast<int32_t>(offsetof(BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525, ___blockPlace_21)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_blockPlace_21() const { return ___blockPlace_21; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_blockPlace_21() { return &___blockPlace_21; }
	inline void set_blockPlace_21(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___blockPlace_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockPlace_21), (void*)value);
	}
};


// CameraScript
struct CameraScript_t62AA38C1604A7163AD920FB5D2AD4C9C39B360B7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject CameraScript::playerObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___playerObject_4;
	// System.Single CameraScript::scopeDistance
	float ___scopeDistance_5;

public:
	inline static int32_t get_offset_of_playerObject_4() { return static_cast<int32_t>(offsetof(CameraScript_t62AA38C1604A7163AD920FB5D2AD4C9C39B360B7, ___playerObject_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_playerObject_4() const { return ___playerObject_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_playerObject_4() { return &___playerObject_4; }
	inline void set_playerObject_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___playerObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_scopeDistance_5() { return static_cast<int32_t>(offsetof(CameraScript_t62AA38C1604A7163AD920FB5D2AD4C9C39B360B7, ___scopeDistance_5)); }
	inline float get_scopeDistance_5() const { return ___scopeDistance_5; }
	inline float* get_address_of_scopeDistance_5() { return &___scopeDistance_5; }
	inline void set_scopeDistance_5(float value)
	{
		___scopeDistance_5 = value;
	}
};


// Container
struct Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// InventorySlot[] Container::slots
	InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* ___slots_4;
	// SoundMaster Container::SM
	SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * ___SM_5;
	// UnityEngine.AudioClip Container::click
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___click_6;

public:
	inline static int32_t get_offset_of_slots_4() { return static_cast<int32_t>(offsetof(Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6, ___slots_4)); }
	inline InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* get_slots_4() const { return ___slots_4; }
	inline InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C** get_address_of_slots_4() { return &___slots_4; }
	inline void set_slots_4(InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* value)
	{
		___slots_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_4), (void*)value);
	}

	inline static int32_t get_offset_of_SM_5() { return static_cast<int32_t>(offsetof(Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6, ___SM_5)); }
	inline SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * get_SM_5() const { return ___SM_5; }
	inline SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 ** get_address_of_SM_5() { return &___SM_5; }
	inline void set_SM_5(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * value)
	{
		___SM_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SM_5), (void*)value);
	}

	inline static int32_t get_offset_of_click_6() { return static_cast<int32_t>(offsetof(Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6, ___click_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_click_6() const { return ___click_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_click_6() { return &___click_6; }
	inline void set_click_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___click_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___click_6), (void*)value);
	}
};


// DialogueChoice
struct DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean DialogueChoice::makeFrown
	bool ___makeFrown_4;
	// System.Boolean DialogueChoice::makeContent
	bool ___makeContent_5;
	// System.Boolean DialogueChoice::makeNeutral
	bool ___makeNeutral_6;
	// System.Boolean DialogueChoice::makeShocked
	bool ___makeShocked_7;
	// System.Boolean DialogueChoice::makeVisible
	bool ___makeVisible_8;
	// System.Boolean DialogueChoice::closeDialogue
	bool ___closeDialogue_9;
	// System.String DialogueChoice::thisText
	String_t* ___thisText_10;
	// UnityEngine.GameObject[] DialogueChoice::choices
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___choices_11;
	// System.String[] DialogueChoice::skillReq
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___skillReq_12;
	// System.Int32[] DialogueChoice::skillValueReq
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___skillValueReq_13;
	// Player DialogueChoice::p
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___p_14;
	// System.String DialogueChoice::characterDialogue
	String_t* ___characterDialogue_15;
	// UnityEngine.UI.Text DialogueChoice::DialogueOnScreen
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DialogueOnScreen_16;
	// UnityEngine.UI.Text DialogueChoice::myText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___myText_17;
	// UnityEngine.Transform DialogueChoice::par
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___par_18;
	// System.Boolean DialogueChoice::qualified
	bool ___qualified_19;
	// System.Boolean DialogueChoice::hasPause
	bool ___hasPause_20;
	// UnityEngine.GameObject DialogueChoice::window
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___window_21;

public:
	inline static int32_t get_offset_of_makeFrown_4() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___makeFrown_4)); }
	inline bool get_makeFrown_4() const { return ___makeFrown_4; }
	inline bool* get_address_of_makeFrown_4() { return &___makeFrown_4; }
	inline void set_makeFrown_4(bool value)
	{
		___makeFrown_4 = value;
	}

	inline static int32_t get_offset_of_makeContent_5() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___makeContent_5)); }
	inline bool get_makeContent_5() const { return ___makeContent_5; }
	inline bool* get_address_of_makeContent_5() { return &___makeContent_5; }
	inline void set_makeContent_5(bool value)
	{
		___makeContent_5 = value;
	}

	inline static int32_t get_offset_of_makeNeutral_6() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___makeNeutral_6)); }
	inline bool get_makeNeutral_6() const { return ___makeNeutral_6; }
	inline bool* get_address_of_makeNeutral_6() { return &___makeNeutral_6; }
	inline void set_makeNeutral_6(bool value)
	{
		___makeNeutral_6 = value;
	}

	inline static int32_t get_offset_of_makeShocked_7() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___makeShocked_7)); }
	inline bool get_makeShocked_7() const { return ___makeShocked_7; }
	inline bool* get_address_of_makeShocked_7() { return &___makeShocked_7; }
	inline void set_makeShocked_7(bool value)
	{
		___makeShocked_7 = value;
	}

	inline static int32_t get_offset_of_makeVisible_8() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___makeVisible_8)); }
	inline bool get_makeVisible_8() const { return ___makeVisible_8; }
	inline bool* get_address_of_makeVisible_8() { return &___makeVisible_8; }
	inline void set_makeVisible_8(bool value)
	{
		___makeVisible_8 = value;
	}

	inline static int32_t get_offset_of_closeDialogue_9() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___closeDialogue_9)); }
	inline bool get_closeDialogue_9() const { return ___closeDialogue_9; }
	inline bool* get_address_of_closeDialogue_9() { return &___closeDialogue_9; }
	inline void set_closeDialogue_9(bool value)
	{
		___closeDialogue_9 = value;
	}

	inline static int32_t get_offset_of_thisText_10() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___thisText_10)); }
	inline String_t* get_thisText_10() const { return ___thisText_10; }
	inline String_t** get_address_of_thisText_10() { return &___thisText_10; }
	inline void set_thisText_10(String_t* value)
	{
		___thisText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thisText_10), (void*)value);
	}

	inline static int32_t get_offset_of_choices_11() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___choices_11)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_choices_11() const { return ___choices_11; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_choices_11() { return &___choices_11; }
	inline void set_choices_11(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___choices_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___choices_11), (void*)value);
	}

	inline static int32_t get_offset_of_skillReq_12() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___skillReq_12)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_skillReq_12() const { return ___skillReq_12; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_skillReq_12() { return &___skillReq_12; }
	inline void set_skillReq_12(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___skillReq_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skillReq_12), (void*)value);
	}

	inline static int32_t get_offset_of_skillValueReq_13() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___skillValueReq_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_skillValueReq_13() const { return ___skillValueReq_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_skillValueReq_13() { return &___skillValueReq_13; }
	inline void set_skillValueReq_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___skillValueReq_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skillValueReq_13), (void*)value);
	}

	inline static int32_t get_offset_of_p_14() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___p_14)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_p_14() const { return ___p_14; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_p_14() { return &___p_14; }
	inline void set_p_14(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___p_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p_14), (void*)value);
	}

	inline static int32_t get_offset_of_characterDialogue_15() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___characterDialogue_15)); }
	inline String_t* get_characterDialogue_15() const { return ___characterDialogue_15; }
	inline String_t** get_address_of_characterDialogue_15() { return &___characterDialogue_15; }
	inline void set_characterDialogue_15(String_t* value)
	{
		___characterDialogue_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterDialogue_15), (void*)value);
	}

	inline static int32_t get_offset_of_DialogueOnScreen_16() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___DialogueOnScreen_16)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DialogueOnScreen_16() const { return ___DialogueOnScreen_16; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DialogueOnScreen_16() { return &___DialogueOnScreen_16; }
	inline void set_DialogueOnScreen_16(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DialogueOnScreen_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DialogueOnScreen_16), (void*)value);
	}

	inline static int32_t get_offset_of_myText_17() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___myText_17)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_myText_17() const { return ___myText_17; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_myText_17() { return &___myText_17; }
	inline void set_myText_17(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___myText_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___myText_17), (void*)value);
	}

	inline static int32_t get_offset_of_par_18() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___par_18)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_par_18() const { return ___par_18; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_par_18() { return &___par_18; }
	inline void set_par_18(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___par_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___par_18), (void*)value);
	}

	inline static int32_t get_offset_of_qualified_19() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___qualified_19)); }
	inline bool get_qualified_19() const { return ___qualified_19; }
	inline bool* get_address_of_qualified_19() { return &___qualified_19; }
	inline void set_qualified_19(bool value)
	{
		___qualified_19 = value;
	}

	inline static int32_t get_offset_of_hasPause_20() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___hasPause_20)); }
	inline bool get_hasPause_20() const { return ___hasPause_20; }
	inline bool* get_address_of_hasPause_20() { return &___hasPause_20; }
	inline void set_hasPause_20(bool value)
	{
		___hasPause_20 = value;
	}

	inline static int32_t get_offset_of_window_21() { return static_cast<int32_t>(offsetof(DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82, ___window_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_window_21() const { return ___window_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_window_21() { return &___window_21; }
	inline void set_window_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___window_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_21), (void*)value);
	}
};


// Entity
struct Entity_t044863A7B37E4AD27CE78D4B680109A139080095  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Entity::health
	float ___health_4;
	// System.Single Entity::maxHealth
	float ___maxHealth_5;
	// System.Int32 Entity::speed
	int32_t ___speed_6;
	// UnityEngine.SpriteRenderer Entity::sr
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sr_7;
	// System.Int32 Entity::damage
	int32_t ___damage_8;
	// System.Single Entity::armor
	float ___armor_9;
	// System.Boolean Entity::isFriendly
	bool ___isFriendly_10;
	// UnityEngine.Vector2 Entity::recoil
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___recoil_11;
	// UnityEngine.Color Entity::damageColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___damageColor_12;
	// UnityEngine.Color Entity::normalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___normalColor_13;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___health_4)); }
	inline float get_health_4() const { return ___health_4; }
	inline float* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(float value)
	{
		___health_4 = value;
	}

	inline static int32_t get_offset_of_maxHealth_5() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___maxHealth_5)); }
	inline float get_maxHealth_5() const { return ___maxHealth_5; }
	inline float* get_address_of_maxHealth_5() { return &___maxHealth_5; }
	inline void set_maxHealth_5(float value)
	{
		___maxHealth_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___speed_6)); }
	inline int32_t get_speed_6() const { return ___speed_6; }
	inline int32_t* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(int32_t value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_sr_7() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___sr_7)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sr_7() const { return ___sr_7; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sr_7() { return &___sr_7; }
	inline void set_sr_7(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sr_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_7), (void*)value);
	}

	inline static int32_t get_offset_of_damage_8() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___damage_8)); }
	inline int32_t get_damage_8() const { return ___damage_8; }
	inline int32_t* get_address_of_damage_8() { return &___damage_8; }
	inline void set_damage_8(int32_t value)
	{
		___damage_8 = value;
	}

	inline static int32_t get_offset_of_armor_9() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___armor_9)); }
	inline float get_armor_9() const { return ___armor_9; }
	inline float* get_address_of_armor_9() { return &___armor_9; }
	inline void set_armor_9(float value)
	{
		___armor_9 = value;
	}

	inline static int32_t get_offset_of_isFriendly_10() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___isFriendly_10)); }
	inline bool get_isFriendly_10() const { return ___isFriendly_10; }
	inline bool* get_address_of_isFriendly_10() { return &___isFriendly_10; }
	inline void set_isFriendly_10(bool value)
	{
		___isFriendly_10 = value;
	}

	inline static int32_t get_offset_of_recoil_11() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___recoil_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_recoil_11() const { return ___recoil_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_recoil_11() { return &___recoil_11; }
	inline void set_recoil_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___recoil_11 = value;
	}

	inline static int32_t get_offset_of_damageColor_12() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___damageColor_12)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_damageColor_12() const { return ___damageColor_12; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_damageColor_12() { return &___damageColor_12; }
	inline void set_damageColor_12(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___damageColor_12 = value;
	}

	inline static int32_t get_offset_of_normalColor_13() { return static_cast<int32_t>(offsetof(Entity_t044863A7B37E4AD27CE78D4B680109A139080095, ___normalColor_13)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_normalColor_13() const { return ___normalColor_13; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_normalColor_13() { return &___normalColor_13; }
	inline void set_normalColor_13(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___normalColor_13 = value;
	}
};


// UnityEngine.Grid
struct Grid_t22D0DEF54366450C35DA4B795F06534948AA0236  : public GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29
{
public:

public:
};


// Hotbar
struct Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] Hotbar::slots
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___slots_4;
	// AttackScript Hotbar::attackScript
	AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * ___attackScript_5;
	// System.Int32 Hotbar::activeSlotIndex
	int32_t ___activeSlotIndex_6;
	// System.Single Hotbar::scrollTime
	float ___scrollTime_7;
	// System.Single Hotbar::scrollCooldown
	float ___scrollCooldown_8;
	// Item Hotbar::slotItem
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___slotItem_9;

public:
	inline static int32_t get_offset_of_slots_4() { return static_cast<int32_t>(offsetof(Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA, ___slots_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_slots_4() const { return ___slots_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_slots_4() { return &___slots_4; }
	inline void set_slots_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___slots_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slots_4), (void*)value);
	}

	inline static int32_t get_offset_of_attackScript_5() { return static_cast<int32_t>(offsetof(Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA, ___attackScript_5)); }
	inline AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * get_attackScript_5() const { return ___attackScript_5; }
	inline AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 ** get_address_of_attackScript_5() { return &___attackScript_5; }
	inline void set_attackScript_5(AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * value)
	{
		___attackScript_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackScript_5), (void*)value);
	}

	inline static int32_t get_offset_of_activeSlotIndex_6() { return static_cast<int32_t>(offsetof(Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA, ___activeSlotIndex_6)); }
	inline int32_t get_activeSlotIndex_6() const { return ___activeSlotIndex_6; }
	inline int32_t* get_address_of_activeSlotIndex_6() { return &___activeSlotIndex_6; }
	inline void set_activeSlotIndex_6(int32_t value)
	{
		___activeSlotIndex_6 = value;
	}

	inline static int32_t get_offset_of_scrollTime_7() { return static_cast<int32_t>(offsetof(Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA, ___scrollTime_7)); }
	inline float get_scrollTime_7() const { return ___scrollTime_7; }
	inline float* get_address_of_scrollTime_7() { return &___scrollTime_7; }
	inline void set_scrollTime_7(float value)
	{
		___scrollTime_7 = value;
	}

	inline static int32_t get_offset_of_scrollCooldown_8() { return static_cast<int32_t>(offsetof(Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA, ___scrollCooldown_8)); }
	inline float get_scrollCooldown_8() const { return ___scrollCooldown_8; }
	inline float* get_address_of_scrollCooldown_8() { return &___scrollCooldown_8; }
	inline void set_scrollCooldown_8(float value)
	{
		___scrollCooldown_8 = value;
	}

	inline static int32_t get_offset_of_slotItem_9() { return static_cast<int32_t>(offsetof(Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA, ___slotItem_9)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_slotItem_9() const { return ___slotItem_9; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_slotItem_9() { return &___slotItem_9; }
	inline void set_slotItem_9(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___slotItem_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotItem_9), (void*)value);
	}
};


// InventorySlot
struct InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer InventorySlot::sr
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sr_4;
	// Item InventorySlot::containedItem
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___containedItem_5;
	// Inventory InventorySlot::inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___inventory_6;
	// UnityEngine.GameObject InventorySlot::textObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___textObject_7;
	// UnityEngine.GameObject InventorySlot::itemDummy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___itemDummy_8;

public:
	inline static int32_t get_offset_of_sr_4() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___sr_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sr_4() const { return ___sr_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sr_4() { return &___sr_4; }
	inline void set_sr_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_4), (void*)value);
	}

	inline static int32_t get_offset_of_containedItem_5() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___containedItem_5)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_containedItem_5() const { return ___containedItem_5; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_containedItem_5() { return &___containedItem_5; }
	inline void set_containedItem_5(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___containedItem_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___containedItem_5), (void*)value);
	}

	inline static int32_t get_offset_of_inventory_6() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___inventory_6)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_inventory_6() const { return ___inventory_6; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_inventory_6() { return &___inventory_6; }
	inline void set_inventory_6(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___inventory_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_6), (void*)value);
	}

	inline static int32_t get_offset_of_textObject_7() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___textObject_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_textObject_7() const { return ___textObject_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_textObject_7() { return &___textObject_7; }
	inline void set_textObject_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___textObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textObject_7), (void*)value);
	}

	inline static int32_t get_offset_of_itemDummy_8() { return static_cast<int32_t>(offsetof(InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB, ___itemDummy_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_itemDummy_8() const { return ___itemDummy_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_itemDummy_8() { return &___itemDummy_8; }
	inline void set_itemDummy_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___itemDummy_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemDummy_8), (void*)value);
	}
};


// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite Item::sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite_4;
	// System.Int32 Item::itemID
	int32_t ___itemID_5;
	// System.Boolean Item::isTouchingPlayer
	bool ___isTouchingPlayer_6;
	// Player Item::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_7;
	// System.Boolean Item::isStackable
	bool ___isStackable_8;
	// System.Int32 Item::quantity
	int32_t ___quantity_9;

public:
	inline static int32_t get_offset_of_sprite_4() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___sprite_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_sprite_4() const { return ___sprite_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_sprite_4() { return &___sprite_4; }
	inline void set_sprite_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___sprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_itemID_5() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___itemID_5)); }
	inline int32_t get_itemID_5() const { return ___itemID_5; }
	inline int32_t* get_address_of_itemID_5() { return &___itemID_5; }
	inline void set_itemID_5(int32_t value)
	{
		___itemID_5 = value;
	}

	inline static int32_t get_offset_of_isTouchingPlayer_6() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___isTouchingPlayer_6)); }
	inline bool get_isTouchingPlayer_6() const { return ___isTouchingPlayer_6; }
	inline bool* get_address_of_isTouchingPlayer_6() { return &___isTouchingPlayer_6; }
	inline void set_isTouchingPlayer_6(bool value)
	{
		___isTouchingPlayer_6 = value;
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___player_7)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_7() const { return ___player_7; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_7), (void*)value);
	}

	inline static int32_t get_offset_of_isStackable_8() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___isStackable_8)); }
	inline bool get_isStackable_8() const { return ___isStackable_8; }
	inline bool* get_address_of_isStackable_8() { return &___isStackable_8; }
	inline void set_isStackable_8(bool value)
	{
		___isStackable_8 = value;
	}

	inline static int32_t get_offset_of_quantity_9() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___quantity_9)); }
	inline int32_t get_quantity_9() const { return ___quantity_9; }
	inline int32_t* get_address_of_quantity_9() { return &___quantity_9; }
	inline void set_quantity_9(int32_t value)
	{
		___quantity_9 = value;
	}
};


// ItemIDList
struct ItemIDList_tD2A9FB64FDC1155CAC876F93F6768EF2819C1382  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ItemMover
struct ItemMover_t1737619556BD4ADE440A28F9827FC6480E43981A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ItemObjectCoolEffect
struct ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MousePointer
struct MousePointer_tC2F2FBAC4C4EF4C03E86ED58A0CB2486AA2FF97A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Inventory MousePointer::inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___inventory_4;
	// UnityEngine.Vector2 MousePointer::mousePos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___mousePos_5;
	// UnityEngine.SpriteRenderer MousePointer::sr
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sr_6;

public:
	inline static int32_t get_offset_of_inventory_4() { return static_cast<int32_t>(offsetof(MousePointer_tC2F2FBAC4C4EF4C03E86ED58A0CB2486AA2FF97A, ___inventory_4)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_inventory_4() const { return ___inventory_4; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_inventory_4() { return &___inventory_4; }
	inline void set_inventory_4(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___inventory_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_4), (void*)value);
	}

	inline static int32_t get_offset_of_mousePos_5() { return static_cast<int32_t>(offsetof(MousePointer_tC2F2FBAC4C4EF4C03E86ED58A0CB2486AA2FF97A, ___mousePos_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_mousePos_5() const { return ___mousePos_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_mousePos_5() { return &___mousePos_5; }
	inline void set_mousePos_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___mousePos_5 = value;
	}

	inline static int32_t get_offset_of_sr_6() { return static_cast<int32_t>(offsetof(MousePointer_tC2F2FBAC4C4EF4C03E86ED58A0CB2486AA2FF97A, ___sr_6)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sr_6() const { return ___sr_6; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sr_6() { return &___sr_6; }
	inline void set_sr_6(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_6), (void*)value);
	}
};


// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PauseMenu::pauseUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseUI_7;
	// UnityEngine.GameObject PauseMenu::deathUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___deathUI_8;

public:
	inline static int32_t get_offset_of_pauseUI_7() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___pauseUI_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseUI_7() const { return ___pauseUI_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseUI_7() { return &___pauseUI_7; }
	inline void set_pauseUI_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_deathUI_8() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___deathUI_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_deathUI_8() const { return ___deathUI_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_deathUI_8() { return &___deathUI_8; }
	inline void set_deathUI_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___deathUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deathUI_8), (void*)value);
	}
};

struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields
{
public:
	// System.Boolean PauseMenu::isPaused
	bool ___isPaused_4;
	// System.Boolean PauseMenu::soundOn
	bool ___soundOn_5;
	// System.Boolean PauseMenu::musicOn
	bool ___musicOn_6;

public:
	inline static int32_t get_offset_of_isPaused_4() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields, ___isPaused_4)); }
	inline bool get_isPaused_4() const { return ___isPaused_4; }
	inline bool* get_address_of_isPaused_4() { return &___isPaused_4; }
	inline void set_isPaused_4(bool value)
	{
		___isPaused_4 = value;
	}

	inline static int32_t get_offset_of_soundOn_5() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields, ___soundOn_5)); }
	inline bool get_soundOn_5() const { return ___soundOn_5; }
	inline bool* get_address_of_soundOn_5() { return &___soundOn_5; }
	inline void set_soundOn_5(bool value)
	{
		___soundOn_5 = value;
	}

	inline static int32_t get_offset_of_musicOn_6() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields, ___musicOn_6)); }
	inline bool get_musicOn_6() const { return ___musicOn_6; }
	inline bool* get_address_of_musicOn_6() { return &___musicOn_6; }
	inline void set_musicOn_6(bool value)
	{
		___musicOn_6 = value;
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D PlayerMovement::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_4;
	// System.Single PlayerMovement::playerSpeed
	float ___playerSpeed_5;
	// System.Single PlayerMovement::angle
	float ___angle_6;
	// System.Single PlayerMovement::mag
	float ___mag_7;
	// System.Int32 PlayerMovement::orientation
	int32_t ___orientation_8;
	// System.Int32 PlayerMovement::lastOrientation
	int32_t ___lastOrientation_9;
	// System.Boolean PlayerMovement::moving
	bool ___moving_10;
	// System.Boolean PlayerMovement::wasMoving
	bool ___wasMoving_11;
	// UnityEngine.GameObject PlayerMovement::inventory
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___inventory_12;
	// Entity PlayerMovement::entity
	Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * ___entity_13;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_14;
	// System.Boolean PlayerMovement::toggled
	bool ___toggled_15;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___rb_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerSpeed_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___playerSpeed_5)); }
	inline float get_playerSpeed_5() const { return ___playerSpeed_5; }
	inline float* get_address_of_playerSpeed_5() { return &___playerSpeed_5; }
	inline void set_playerSpeed_5(float value)
	{
		___playerSpeed_5 = value;
	}

	inline static int32_t get_offset_of_angle_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___angle_6)); }
	inline float get_angle_6() const { return ___angle_6; }
	inline float* get_address_of_angle_6() { return &___angle_6; }
	inline void set_angle_6(float value)
	{
		___angle_6 = value;
	}

	inline static int32_t get_offset_of_mag_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___mag_7)); }
	inline float get_mag_7() const { return ___mag_7; }
	inline float* get_address_of_mag_7() { return &___mag_7; }
	inline void set_mag_7(float value)
	{
		___mag_7 = value;
	}

	inline static int32_t get_offset_of_orientation_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___orientation_8)); }
	inline int32_t get_orientation_8() const { return ___orientation_8; }
	inline int32_t* get_address_of_orientation_8() { return &___orientation_8; }
	inline void set_orientation_8(int32_t value)
	{
		___orientation_8 = value;
	}

	inline static int32_t get_offset_of_lastOrientation_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___lastOrientation_9)); }
	inline int32_t get_lastOrientation_9() const { return ___lastOrientation_9; }
	inline int32_t* get_address_of_lastOrientation_9() { return &___lastOrientation_9; }
	inline void set_lastOrientation_9(int32_t value)
	{
		___lastOrientation_9 = value;
	}

	inline static int32_t get_offset_of_moving_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___moving_10)); }
	inline bool get_moving_10() const { return ___moving_10; }
	inline bool* get_address_of_moving_10() { return &___moving_10; }
	inline void set_moving_10(bool value)
	{
		___moving_10 = value;
	}

	inline static int32_t get_offset_of_wasMoving_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___wasMoving_11)); }
	inline bool get_wasMoving_11() const { return ___wasMoving_11; }
	inline bool* get_address_of_wasMoving_11() { return &___wasMoving_11; }
	inline void set_wasMoving_11(bool value)
	{
		___wasMoving_11 = value;
	}

	inline static int32_t get_offset_of_inventory_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___inventory_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_inventory_12() const { return ___inventory_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_inventory_12() { return &___inventory_12; }
	inline void set_inventory_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___inventory_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_12), (void*)value);
	}

	inline static int32_t get_offset_of_entity_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___entity_13)); }
	inline Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * get_entity_13() const { return ___entity_13; }
	inline Entity_t044863A7B37E4AD27CE78D4B680109A139080095 ** get_address_of_entity_13() { return &___entity_13; }
	inline void set_entity_13(Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * value)
	{
		___entity_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entity_13), (void*)value);
	}

	inline static int32_t get_offset_of_anim_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___anim_14)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_14() const { return ___anim_14; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_14() { return &___anim_14; }
	inline void set_anim_14(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_14), (void*)value);
	}

	inline static int32_t get_offset_of_toggled_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___toggled_15)); }
	inline bool get_toggled_15() const { return ___toggled_15; }
	inline bool* get_address_of_toggled_15() { return &___toggled_15; }
	inline void set_toggled_15(bool value)
	{
		___toggled_15 = value;
	}
};


// SoundMaster
struct SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean SoundMaster::musicOn
	bool ___musicOn_5;
	// UnityEngine.AudioSource SoundMaster::AS
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___AS_6;
	// System.Single SoundMaster::musicVolume
	float ___musicVolume_7;
	// UnityEngine.AudioClip SoundMaster::musicClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___musicClip_8;
	// UnityEngine.UI.Text SoundMaster::soundText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___soundText_9;
	// UnityEngine.UI.Text SoundMaster::musicText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___musicText_10;

public:
	inline static int32_t get_offset_of_musicOn_5() { return static_cast<int32_t>(offsetof(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159, ___musicOn_5)); }
	inline bool get_musicOn_5() const { return ___musicOn_5; }
	inline bool* get_address_of_musicOn_5() { return &___musicOn_5; }
	inline void set_musicOn_5(bool value)
	{
		___musicOn_5 = value;
	}

	inline static int32_t get_offset_of_AS_6() { return static_cast<int32_t>(offsetof(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159, ___AS_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_AS_6() const { return ___AS_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_AS_6() { return &___AS_6; }
	inline void set_AS_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___AS_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AS_6), (void*)value);
	}

	inline static int32_t get_offset_of_musicVolume_7() { return static_cast<int32_t>(offsetof(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159, ___musicVolume_7)); }
	inline float get_musicVolume_7() const { return ___musicVolume_7; }
	inline float* get_address_of_musicVolume_7() { return &___musicVolume_7; }
	inline void set_musicVolume_7(float value)
	{
		___musicVolume_7 = value;
	}

	inline static int32_t get_offset_of_musicClip_8() { return static_cast<int32_t>(offsetof(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159, ___musicClip_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_musicClip_8() const { return ___musicClip_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_musicClip_8() { return &___musicClip_8; }
	inline void set_musicClip_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___musicClip_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicClip_8), (void*)value);
	}

	inline static int32_t get_offset_of_soundText_9() { return static_cast<int32_t>(offsetof(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159, ___soundText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_soundText_9() const { return ___soundText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_soundText_9() { return &___soundText_9; }
	inline void set_soundText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___soundText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundText_9), (void*)value);
	}

	inline static int32_t get_offset_of_musicText_10() { return static_cast<int32_t>(offsetof(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159, ___musicText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_musicText_10() const { return ___musicText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_musicText_10() { return &___musicText_10; }
	inline void set_musicText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___musicText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicText_10), (void*)value);
	}
};

struct SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields
{
public:
	// System.Boolean SoundMaster::soundOn
	bool ___soundOn_4;

public:
	inline static int32_t get_offset_of_soundOn_4() { return static_cast<int32_t>(offsetof(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields, ___soundOn_4)); }
	inline bool get_soundOn_4() const { return ___soundOn_4; }
	inline bool* get_address_of_soundOn_4() { return &___soundOn_4; }
	inline void set_soundOn_4(bool value)
	{
		___soundOn_4 = value;
	}
};


// TempDialogue
struct TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String[] TempDialogue::greetingDialogue
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___greetingDialogue_4;
	// System.String[] TempDialogue::hitDialogue
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___hitDialogue_5;
	// System.String TempDialogue::victoryDialogue
	String_t* ___victoryDialogue_6;
	// System.String TempDialogue::failureDialogue
	String_t* ___failureDialogue_7;
	// UnityEngine.UI.Text TempDialogue::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_8;
	// UnityEngine.RectTransform TempDialogue::textBox
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___textBox_9;
	// Inventory TempDialogue::inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___inventory_10;
	// Player TempDialogue::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_11;
	// UnityEngine.Coroutine TempDialogue::c
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___c_12;
	// System.Boolean TempDialogue::introComplete
	bool ___introComplete_13;

public:
	inline static int32_t get_offset_of_greetingDialogue_4() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___greetingDialogue_4)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_greetingDialogue_4() const { return ___greetingDialogue_4; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_greetingDialogue_4() { return &___greetingDialogue_4; }
	inline void set_greetingDialogue_4(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___greetingDialogue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___greetingDialogue_4), (void*)value);
	}

	inline static int32_t get_offset_of_hitDialogue_5() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___hitDialogue_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_hitDialogue_5() const { return ___hitDialogue_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_hitDialogue_5() { return &___hitDialogue_5; }
	inline void set_hitDialogue_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___hitDialogue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitDialogue_5), (void*)value);
	}

	inline static int32_t get_offset_of_victoryDialogue_6() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___victoryDialogue_6)); }
	inline String_t* get_victoryDialogue_6() const { return ___victoryDialogue_6; }
	inline String_t** get_address_of_victoryDialogue_6() { return &___victoryDialogue_6; }
	inline void set_victoryDialogue_6(String_t* value)
	{
		___victoryDialogue_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___victoryDialogue_6), (void*)value);
	}

	inline static int32_t get_offset_of_failureDialogue_7() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___failureDialogue_7)); }
	inline String_t* get_failureDialogue_7() const { return ___failureDialogue_7; }
	inline String_t** get_address_of_failureDialogue_7() { return &___failureDialogue_7; }
	inline void set_failureDialogue_7(String_t* value)
	{
		___failureDialogue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failureDialogue_7), (void*)value);
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___text_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_8() const { return ___text_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_8), (void*)value);
	}

	inline static int32_t get_offset_of_textBox_9() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___textBox_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_textBox_9() const { return ___textBox_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_textBox_9() { return &___textBox_9; }
	inline void set_textBox_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___textBox_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textBox_9), (void*)value);
	}

	inline static int32_t get_offset_of_inventory_10() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___inventory_10)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_inventory_10() const { return ___inventory_10; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_inventory_10() { return &___inventory_10; }
	inline void set_inventory_10(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___inventory_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_10), (void*)value);
	}

	inline static int32_t get_offset_of_player_11() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___player_11)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_11() const { return ___player_11; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_11() { return &___player_11; }
	inline void set_player_11(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_11), (void*)value);
	}

	inline static int32_t get_offset_of_c_12() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___c_12)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_c_12() const { return ___c_12; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_c_12() { return &___c_12; }
	inline void set_c_12(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___c_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_12), (void*)value);
	}

	inline static int32_t get_offset_of_introComplete_13() { return static_cast<int32_t>(offsetof(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5, ___introComplete_13)); }
	inline bool get_introComplete_13() const { return ___introComplete_13; }
	inline bool* get_address_of_introComplete_13() { return &___introComplete_13; }
	inline void set_introComplete_13(bool value)
	{
		___introComplete_13 = value;
	}
};


// TileData
struct TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TileData::buildingBlock
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___buildingBlock_4;
	// System.Int32 TileData::durability
	int32_t ___durability_5;
	// System.Boolean TileData::isUnbreakable
	bool ___isUnbreakable_6;

public:
	inline static int32_t get_offset_of_buildingBlock_4() { return static_cast<int32_t>(offsetof(TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A, ___buildingBlock_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_buildingBlock_4() const { return ___buildingBlock_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_buildingBlock_4() { return &___buildingBlock_4; }
	inline void set_buildingBlock_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___buildingBlock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildingBlock_4), (void*)value);
	}

	inline static int32_t get_offset_of_durability_5() { return static_cast<int32_t>(offsetof(TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A, ___durability_5)); }
	inline int32_t get_durability_5() const { return ___durability_5; }
	inline int32_t* get_address_of_durability_5() { return &___durability_5; }
	inline void set_durability_5(int32_t value)
	{
		___durability_5 = value;
	}

	inline static int32_t get_offset_of_isUnbreakable_6() { return static_cast<int32_t>(offsetof(TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A, ___isUnbreakable_6)); }
	inline bool get_isUnbreakable_6() const { return ___isUnbreakable_6; }
	inline bool* get_address_of_isUnbreakable_6() { return &___isUnbreakable_6; }
	inline void set_isUnbreakable_6(bool value)
	{
		___isUnbreakable_6 = value;
	}
};


// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31  : public GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// BuildingBlock
struct BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568  : public Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C
{
public:
	// UnityEngine.RuleTile BuildingBlock::blockTilePrefab
	RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0 * ___blockTilePrefab_10;

public:
	inline static int32_t get_offset_of_blockTilePrefab_10() { return static_cast<int32_t>(offsetof(BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568, ___blockTilePrefab_10)); }
	inline RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0 * get_blockTilePrefab_10() const { return ___blockTilePrefab_10; }
	inline RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0 ** get_address_of_blockTilePrefab_10() { return &___blockTilePrefab_10; }
	inline void set_blockTilePrefab_10(RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0 * value)
	{
		___blockTilePrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blockTilePrefab_10), (void*)value);
	}
};


// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public Entity_t044863A7B37E4AD27CE78D4B680109A139080095
{
public:
	// System.Int32 Enemy::aggroRange
	int32_t ___aggroRange_14;
	// UnityEngine.Animator Enemy::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_15;
	// System.Boolean Enemy::isAggrod
	bool ___isAggrod_16;
	// UnityEngine.GameObject Enemy::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_17;
	// System.Single Enemy::playerX
	float ___playerX_18;
	// System.Single Enemy::playerY
	float ___playerY_19;
	// System.Int32 Enemy::orientation
	int32_t ___orientation_20;
	// System.Int32 Enemy::lastOrientation
	int32_t ___lastOrientation_21;
	// UnityEngine.Rigidbody2D Enemy::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_22;
	// System.Single Enemy::angleToPlayer
	float ___angleToPlayer_23;

public:
	inline static int32_t get_offset_of_aggroRange_14() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___aggroRange_14)); }
	inline int32_t get_aggroRange_14() const { return ___aggroRange_14; }
	inline int32_t* get_address_of_aggroRange_14() { return &___aggroRange_14; }
	inline void set_aggroRange_14(int32_t value)
	{
		___aggroRange_14 = value;
	}

	inline static int32_t get_offset_of_anim_15() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___anim_15)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_15() const { return ___anim_15; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_15() { return &___anim_15; }
	inline void set_anim_15(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_15), (void*)value);
	}

	inline static int32_t get_offset_of_isAggrod_16() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___isAggrod_16)); }
	inline bool get_isAggrod_16() const { return ___isAggrod_16; }
	inline bool* get_address_of_isAggrod_16() { return &___isAggrod_16; }
	inline void set_isAggrod_16(bool value)
	{
		___isAggrod_16 = value;
	}

	inline static int32_t get_offset_of_player_17() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___player_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_17() const { return ___player_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_17() { return &___player_17; }
	inline void set_player_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_17), (void*)value);
	}

	inline static int32_t get_offset_of_playerX_18() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___playerX_18)); }
	inline float get_playerX_18() const { return ___playerX_18; }
	inline float* get_address_of_playerX_18() { return &___playerX_18; }
	inline void set_playerX_18(float value)
	{
		___playerX_18 = value;
	}

	inline static int32_t get_offset_of_playerY_19() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___playerY_19)); }
	inline float get_playerY_19() const { return ___playerY_19; }
	inline float* get_address_of_playerY_19() { return &___playerY_19; }
	inline void set_playerY_19(float value)
	{
		___playerY_19 = value;
	}

	inline static int32_t get_offset_of_orientation_20() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___orientation_20)); }
	inline int32_t get_orientation_20() const { return ___orientation_20; }
	inline int32_t* get_address_of_orientation_20() { return &___orientation_20; }
	inline void set_orientation_20(int32_t value)
	{
		___orientation_20 = value;
	}

	inline static int32_t get_offset_of_lastOrientation_21() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___lastOrientation_21)); }
	inline int32_t get_lastOrientation_21() const { return ___lastOrientation_21; }
	inline int32_t* get_address_of_lastOrientation_21() { return &___lastOrientation_21; }
	inline void set_lastOrientation_21(int32_t value)
	{
		___lastOrientation_21 = value;
	}

	inline static int32_t get_offset_of_rb_22() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___rb_22)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_22() const { return ___rb_22; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_22() { return &___rb_22; }
	inline void set_rb_22(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_22), (void*)value);
	}

	inline static int32_t get_offset_of_angleToPlayer_23() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___angleToPlayer_23)); }
	inline float get_angleToPlayer_23() const { return ___angleToPlayer_23; }
	inline float* get_address_of_angleToPlayer_23() { return &___angleToPlayer_23; }
	inline void set_angleToPlayer_23(float value)
	{
		___angleToPlayer_23 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805  : public Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6
{
public:
	// UnityEngine.Vector3 Inventory::posIn
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posIn_7;
	// UnityEngine.Vector3 Inventory::posVis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___posVis_8;
	// UnityEngine.Vector3 Inventory::mousePos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mousePos_9;
	// UnityEngine.RectTransform Inventory::rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect_10;
	// UnityEngine.GameObject Inventory::mouseObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mouseObject_11;

public:
	inline static int32_t get_offset_of_posIn_7() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___posIn_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_posIn_7() const { return ___posIn_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_posIn_7() { return &___posIn_7; }
	inline void set_posIn_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___posIn_7 = value;
	}

	inline static int32_t get_offset_of_posVis_8() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___posVis_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_posVis_8() const { return ___posVis_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_posVis_8() { return &___posVis_8; }
	inline void set_posVis_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___posVis_8 = value;
	}

	inline static int32_t get_offset_of_mousePos_9() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___mousePos_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mousePos_9() const { return ___mousePos_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mousePos_9() { return &___mousePos_9; }
	inline void set_mousePos_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mousePos_9 = value;
	}

	inline static int32_t get_offset_of_rect_10() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___rect_10)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rect_10() const { return ___rect_10; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rect_10() { return &___rect_10; }
	inline void set_rect_10(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rect_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rect_10), (void*)value);
	}

	inline static int32_t get_offset_of_mouseObject_11() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___mouseObject_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mouseObject_11() const { return ___mouseObject_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mouseObject_11() { return &___mouseObject_11; }
	inline void set_mouseObject_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mouseObject_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseObject_11), (void*)value);
	}
};


// NPC
struct NPC_tC1B80DAFC03710A57E14A5AA80EED2CD89A35AE6  : public Entity_t044863A7B37E4AD27CE78D4B680109A139080095
{
public:
	// UnityEngine.Rigidbody2D NPC::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_14;
	// TempDialogue NPC::td
	TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * ___td_15;

public:
	inline static int32_t get_offset_of_rb_14() { return static_cast<int32_t>(offsetof(NPC_tC1B80DAFC03710A57E14A5AA80EED2CD89A35AE6, ___rb_14)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_14() const { return ___rb_14; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_14() { return &___rb_14; }
	inline void set_rb_14(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_14), (void*)value);
	}

	inline static int32_t get_offset_of_td_15() { return static_cast<int32_t>(offsetof(NPC_tC1B80DAFC03710A57E14A5AA80EED2CD89A35AE6, ___td_15)); }
	inline TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * get_td_15() const { return ___td_15; }
	inline TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 ** get_address_of_td_15() { return &___td_15; }
	inline void set_td_15(TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * value)
	{
		___td_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___td_15), (void*)value);
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public Entity_t044863A7B37E4AD27CE78D4B680109A139080095
{
public:
	// UnityEngine.GameObject Player::healthBarMask
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___healthBarMask_14;
	// UnityEngine.Coroutine Player::regen
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___regen_15;
	// Inventory Player::inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___inventory_16;
	// PauseMenu Player::PM
	PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * ___PM_17;
	// UnityEngine.GameObject Player::hotbar
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hotbar_18;
	// UnityEngine.AudioSource Player::AS
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___AS_19;
	// UnityEngine.AudioClip[] Player::hitsound
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___hitsound_20;
	// UnityEngine.UI.Text Player::gameOverText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___gameOverText_21;

public:
	inline static int32_t get_offset_of_healthBarMask_14() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___healthBarMask_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_healthBarMask_14() const { return ___healthBarMask_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_healthBarMask_14() { return &___healthBarMask_14; }
	inline void set_healthBarMask_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___healthBarMask_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthBarMask_14), (void*)value);
	}

	inline static int32_t get_offset_of_regen_15() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___regen_15)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_regen_15() const { return ___regen_15; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_regen_15() { return &___regen_15; }
	inline void set_regen_15(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___regen_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regen_15), (void*)value);
	}

	inline static int32_t get_offset_of_inventory_16() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___inventory_16)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_inventory_16() const { return ___inventory_16; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_inventory_16() { return &___inventory_16; }
	inline void set_inventory_16(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___inventory_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_16), (void*)value);
	}

	inline static int32_t get_offset_of_PM_17() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___PM_17)); }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * get_PM_17() const { return ___PM_17; }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 ** get_address_of_PM_17() { return &___PM_17; }
	inline void set_PM_17(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * value)
	{
		___PM_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PM_17), (void*)value);
	}

	inline static int32_t get_offset_of_hotbar_18() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___hotbar_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hotbar_18() const { return ___hotbar_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hotbar_18() { return &___hotbar_18; }
	inline void set_hotbar_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hotbar_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hotbar_18), (void*)value);
	}

	inline static int32_t get_offset_of_AS_19() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___AS_19)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_AS_19() const { return ___AS_19; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_AS_19() { return &___AS_19; }
	inline void set_AS_19(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___AS_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AS_19), (void*)value);
	}

	inline static int32_t get_offset_of_hitsound_20() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___hitsound_20)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_hitsound_20() const { return ___hitsound_20; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_hitsound_20() { return &___hitsound_20; }
	inline void set_hitsound_20(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___hitsound_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitsound_20), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverText_21() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___gameOverText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_gameOverText_21() const { return ___gameOverText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_gameOverText_21() { return &___gameOverText_21; }
	inline void set_gameOverText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___gameOverText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverText_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// Weapon
struct Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226  : public Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C
{
public:
	// System.Single Weapon::attackRate
	float ___attackRate_10;
	// System.Single Weapon::attackDelay
	float ___attackDelay_11;
	// UnityEngine.GameObject Weapon::weaponObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___weaponObject_12;
	// System.Single Weapon::damage
	float ___damage_13;
	// UnityEngine.AudioClip Weapon::initiateAttackSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___initiateAttackSound_14;
	// UnityEngine.AudioClip Weapon::attackHitSound
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___attackHitSound_15;

public:
	inline static int32_t get_offset_of_attackRate_10() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___attackRate_10)); }
	inline float get_attackRate_10() const { return ___attackRate_10; }
	inline float* get_address_of_attackRate_10() { return &___attackRate_10; }
	inline void set_attackRate_10(float value)
	{
		___attackRate_10 = value;
	}

	inline static int32_t get_offset_of_attackDelay_11() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___attackDelay_11)); }
	inline float get_attackDelay_11() const { return ___attackDelay_11; }
	inline float* get_address_of_attackDelay_11() { return &___attackDelay_11; }
	inline void set_attackDelay_11(float value)
	{
		___attackDelay_11 = value;
	}

	inline static int32_t get_offset_of_weaponObject_12() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___weaponObject_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_weaponObject_12() const { return ___weaponObject_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_weaponObject_12() { return &___weaponObject_12; }
	inline void set_weaponObject_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___weaponObject_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponObject_12), (void*)value);
	}

	inline static int32_t get_offset_of_damage_13() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___damage_13)); }
	inline float get_damage_13() const { return ___damage_13; }
	inline float* get_address_of_damage_13() { return &___damage_13; }
	inline void set_damage_13(float value)
	{
		___damage_13 = value;
	}

	inline static int32_t get_offset_of_initiateAttackSound_14() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___initiateAttackSound_14)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_initiateAttackSound_14() const { return ___initiateAttackSound_14; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_initiateAttackSound_14() { return &___initiateAttackSound_14; }
	inline void set_initiateAttackSound_14(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___initiateAttackSound_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initiateAttackSound_14), (void*)value);
	}

	inline static int32_t get_offset_of_attackHitSound_15() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___attackHitSound_15)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_attackHitSound_15() const { return ___attackHitSound_15; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_attackHitSound_15() { return &___attackHitSound_15; }
	inline void set_attackHitSound_15(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___attackHitSound_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attackHitSound_15), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// MeleeWeapon
struct MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5  : public Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226
{
public:
	// System.Boolean MeleeWeapon::isBlunt
	bool ___isBlunt_16;
	// System.Single MeleeWeapon::miningEffectiveness
	float ___miningEffectiveness_17;
	// System.Single MeleeWeapon::choppingEffectiveness
	float ___choppingEffectiveness_18;
	// System.Boolean MeleeWeapon::hasLunge
	bool ___hasLunge_19;

public:
	inline static int32_t get_offset_of_isBlunt_16() { return static_cast<int32_t>(offsetof(MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5, ___isBlunt_16)); }
	inline bool get_isBlunt_16() const { return ___isBlunt_16; }
	inline bool* get_address_of_isBlunt_16() { return &___isBlunt_16; }
	inline void set_isBlunt_16(bool value)
	{
		___isBlunt_16 = value;
	}

	inline static int32_t get_offset_of_miningEffectiveness_17() { return static_cast<int32_t>(offsetof(MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5, ___miningEffectiveness_17)); }
	inline float get_miningEffectiveness_17() const { return ___miningEffectiveness_17; }
	inline float* get_address_of_miningEffectiveness_17() { return &___miningEffectiveness_17; }
	inline void set_miningEffectiveness_17(float value)
	{
		___miningEffectiveness_17 = value;
	}

	inline static int32_t get_offset_of_choppingEffectiveness_18() { return static_cast<int32_t>(offsetof(MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5, ___choppingEffectiveness_18)); }
	inline float get_choppingEffectiveness_18() const { return ___choppingEffectiveness_18; }
	inline float* get_address_of_choppingEffectiveness_18() { return &___choppingEffectiveness_18; }
	inline void set_choppingEffectiveness_18(float value)
	{
		___choppingEffectiveness_18 = value;
	}

	inline static int32_t get_offset_of_hasLunge_19() { return static_cast<int32_t>(offsetof(MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5, ___hasLunge_19)); }
	inline bool get_hasLunge_19() const { return ___hasLunge_19; }
	inline bool* get_address_of_hasLunge_19() { return &___hasLunge_19; }
	inline void set_hasLunge_19(bool value)
	{
		___hasLunge_19 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * m_Items[1];

public:
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// InventorySlot[]
struct InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * m_Items[1];

public:
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<Entity>()
inline Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * Component_GetComponent_TisEntity_t044863A7B37E4AD27CE78D4B680109A139080095_m510DFC38CA13A2E606DBF067DCF56AD6EC93734E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.LineRenderer>()
inline LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<MeleeWeapon>()
inline MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Void AttackScript::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackScript_Shoot_m90DA46CE871925B0BBA2B02951FF4F020CD76EDD (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator AttackScript::StartSwing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttackScript_StartSwing_m877256A2EF4719A9882DC90479F542B5425CD751 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_sortingOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingOrder_mAABE4F8F9B158068C8A1582ACE0BFEA3CF499139 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator AttackScript::SizeSwingShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttackScript_SizeSwingShift_mE872BE82399EBDC54611FDA871EA43B42A8A8656 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* Physics2D_OverlapCircleAll_m1D3E8E59627D524F35EF6C67940DD1121CEE6E7C (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider2D::get_isTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider2D_get_isTrigger_m2D8D206E7F91ED3AF8AC552E17414CBD7279F6FF (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// System.Void Entity::TakeRecoil(UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_TakeRecoil_mDFB8CC4A0CC37C449BFFECEC178060CA076D4304 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, int32_t ___mag1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void AttackScript/<StartSwing>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSwingU3Ed__20__ctor_m46DBCCF5B23DB90A84F7CEEE8705A8C52F098C08 (U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void AttackScript/<SizeSwingShift>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSizeSwingShiftU3Ed__21__ctor_m18F54E9007CED16799969AC547EC878A90A27CAF (U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  ___hit0, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::SetPosition(System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, int32_t ___index0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RaycastHit2D_get_point_m10D5AB3B26EAE62583BE35CFA13A3E40BDAF30AE (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.LineRenderer::get_startColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_startColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.LineRenderer::get_endColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.LineRenderer::set_endColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2 (LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator AttackScript::FadeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttackScript_FadeLine_m286E0FD58FBBB5C9A3EF1D4A90CEDC4DB0DF5176 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method);
// System.Void AttackScript/<FadeLine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeLineU3Ed__23__ctor_m2222ECADA4C79B9ECDEB805B8C7672DE29E18E3A (U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Grid>()
inline Grid_t22D0DEF54366450C35DA4B795F06534948AA0236 * GameObject_GetComponent_TisGrid_t22D0DEF54366450C35DA4B795F06534948AA0236_mEAD03C94C9BAD329C821CE3C6681FCEA6A84FEF3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Grid_t22D0DEF54366450C35DA4B795F06534948AA0236 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Grid::get_cellSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Grid_get_cellSize_m350AB6E17937E92D1C02410690D6160792D27B6C (Grid_t22D0DEF54366450C35DA4B795F06534948AA0236 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Tilemaps.Tilemap>()
inline Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * GameObject_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_mEACBFF0E0C686B5520256EBA97379F826FF9DE3F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3Int UnityEngine.GridLayout::WorldToCell(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9 (GridLayout_t7BA9C388D3466CA1F18CAD50848F670F670D5D29 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition0, const RuntimeMethod* method);
// UnityEngine.Tilemaps.TileBase UnityEngine.Tilemaps.Tilemap::GetTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052 * Tilemap_GetTile_m611C89C47D6FE68099998192BA57344FCE782B19 (Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<BuildingBlock>()
inline BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * GameObject_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m9B69FA7F307BC43E86DE726E083BF03460733E32 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Hotbar>()
inline Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * GameObject_GetComponent_TisHotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA_m60D8373F2B0D5772718609B01854ED85A08B9978 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.TileBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_mDA8C773A2FF8D6744BE268AE9D77CC3FB2A5D862 (Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052 * ___tile1, const RuntimeMethod* method);
// System.Void BuildScript::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildScript_PlaySound_m679EE6D3000BCCC653D534A2B0FA255949EC2785 (BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___x0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<BuildingBlock>()
inline BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Hotbar::UpdateSlotText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_UpdateSlotText_mBF1E059F25C406893253DD3D1580FA68D42BD93A (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Tilemaps.Tilemap::GetInstantiatedObject(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Tilemap_GetInstantiatedObject_mB68E32D09E95636B06E70E56642B5738CDA47680 (Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * __this, Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  ___position0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TileData>()
inline TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * GameObject_GetComponent_TisTileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A_mBBC4C34E25A85DF84EEB6D1C9062FF9073A4C77C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Item>()
inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void InventorySlot::addItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_addItem_m2FB504FE9090A8C7896EDF7D235C500AB3D9C007 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// System.Void SoundMaster::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMaster_PlaySound_m643DBD13FBFB6D131816B74DD477BAAA799F1835 (SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___x0, const RuntimeMethod* method);
// System.Void InventorySlot::InsertItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_InsertItem_m987690247A7F0F457BA3F11F46E1F99E85DCD6E4 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Char System.Char::ToUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToUpper_m7BE77639C5F8EC99F56A729C0D26A684A85F0BC7 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void DialogueChoice/<ShiftWindowRight>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShiftWindowRightU3Ed__19__ctor_m6F4D39B91E686DE396EDB05880C5FB09B3E1E302 (U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DialogueChoice/<CloseDialogueWindow>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseDialogueWindowU3Ed__20__ctor_mD4FAE0F8C5247C2A8BDBAE3CBBE6434927BE8FF4 (U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void DialogueChoice/<OpenDialogueWindow>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDialogueWindowU3Ed__21__ctor_mC9D0A8EE24408AA45264AB632BD65DA4D8A071E6 (U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator DialogueChoice::ShiftWindowRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueChoice_ShiftWindowRight_m1D0C47824C1B38E59D00F3051473A2E46CD1E17A (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform,System.Boolean)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, bool ___worldPositionStays2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, bool, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD346AB5980B67F04B2C7E12D88693520FFBAD37D_gshared)(___original0, ___parent1, ___worldPositionStays2, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_ForceUpdateCanvases_m0D46827299273BBA96CE6FA6B8A12B8989B52ECE (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<DialogueChoice>()
inline DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * GameObject_GetComponent_TisDialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82_m98EB14B2D684AB2CAD077F9B403EE218C29AD079 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * Text_get_cachedTextGenerator_mC1CA3F78904E1B2E5759DEA6EFDB1C13AB3BBB65 (Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextGenerator_get_lines_m3277C5BEA1392607B39B8CA03E902CE5AD7CEFC1 (TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator DialogueChoice::WriteToTextBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueChoice_WriteToTextBox_mAF908ED8A56DD92CE0BBE6C06DA2B4A3305E2D0F (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method);
// System.Void DialogueChoice/<WriteToTextBox>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteToTextBoxU3Ed__23__ctor_m9B62C55D11DFF30FD20ADB5D54F64944A8301B11 (U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Entity::sortLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_sortLayers_m02B956D45A90E31A235A934BB100105FF213958E (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method);
// System.Void Enemy::SetAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_SetAnim_m8F3D2542A22AE1EE64F030419257B575AE363F85 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void Entity::SoftenRecoil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_SoftenRecoil_m20AA0962D687C84D084412B8D29C44DF9E50B9E2 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Void Entity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity__ctor_mA22D51D64B97E8F6F879E72C8E0DE7D26ED0C824 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Collections.IEnumerator Entity::ResetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Entity_ResetColor_m5E33808AD00815D7A6407CE3564805FBEA9D766E (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method);
// System.Void Entity/<ResetColor>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetColorU3Ed__18__ctor_m2E7C4203BF0817C7049DDC4B89271185E4898765 (U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Item>()
inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Hotbar::InsertItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_InsertItem_mB50F49DB726223B7921AAC9B3C14462445A0544F (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7 (const RuntimeMethod* method);
// System.Collections.IEnumerator Hotbar::Adjust(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, int32_t ___x0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F (int32_t ___key0, const RuntimeMethod* method);
// System.Void Hotbar/<Adjust>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdjustU3Ed__8__ctor_m2398A561547F7AC9D14A270278B09391865D9DB5 (U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<InventorySlot>()
inline InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void InventorySlot::ShiftScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_ShiftScale_m00876E41DDAF245A779B74CAD9F7337EC5C7B50A (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newSize0, const RuntimeMethod* method);
// System.Void InventorySlot::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_UpdateText_mB0ABF69551102BA4F57CA78F004FA389BEBAE56A (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___componentType0, const RuntimeMethod* method);
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372 (Type_t * __this, const RuntimeMethod* method);
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.IEnumerator Hotbar::DelayUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hotbar_DelayUpdate_m171C9936E7105DB6BB21D31211BC61FD790A2AC3 (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, int32_t ___x0, const RuntimeMethod* method);
// System.Void Hotbar/<DelayUpdate>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayUpdateU3Ed__13__ctor_mC957B6B9A4E5AA5D78951DB9B476259B9B976EC7 (U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Container::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container__ctor_mBF26C4943BFA50AA0839951E3004F955E2E729CA (Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void InventorySlot/<SwapItems>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwapItemsU3Ed__10__ctor_m52F4910F04CE1C4AE60D51A3969A32492E4525C3 (U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void InventorySlot::PushItemToPointer(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_PushItemToPointer_m5C2DBE8FCD8CDE22811636A3EAF125ABF56FDC00 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// System.Collections.IEnumerator InventorySlot::SwapItems(Item,Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InventorySlot_SwapItems_mC44E028BC4B3D45443D68BF834ED2B08182D1616 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item10, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item21, const RuntimeMethod* method);
// System.Collections.IEnumerator InventorySlot::SizeShift(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InventorySlot_SizeShift_mB7E04D68EE4108A6C55822BE80116D9AD54B3FEE (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newSize0, const RuntimeMethod* method);
// System.Void InventorySlot/<SizeShift>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSizeShiftU3Ed__14__ctor_m6B9DE24809AA4CF95224828393CA485D822BAFAD (U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Item/<PlayerCollect>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayerCollectU3Ed__7__ctor_mB683E6ADA3D9EE036409141C068C35ACE0634528 (U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Item::PlayerCollect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Item_PlayerCollect_mC6CDB19CC79115B9B61587ED92B10AE5C4F1A055 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method);
// System.Void Item/<CoolItemEffectStuffz>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolItemEffectStuffzU3Ed__10__ctor_m87978DE65E11C1681256B7B1472BD13E400BE8BE (U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator ItemObjectCoolEffect::CoolItemEffectStuffz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ItemObjectCoolEffect_CoolItemEffectStuffz_m3AAE87D6A07E9663883D9758BF9DE29095C99423 (ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * __this, const RuntimeMethod* method);
// System.Void ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolItemEffectStuffzU3Ed__1__ctor_m1DF1E76C2F1162271EE3AB972C8F4405BE8870EE (U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TempDialogue>()
inline TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * Component_GetComponent_TisTempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5_m877A6356616DCD3017D3B78434148723B8152C7D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void TempDialogue::Hurt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempDialogue_Hurt_mB762E23BA84EDE4033D6EE1313F711EA6831A2B4 (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_m395165A04A026E9974327328181ACFA512DD76C7 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void PauseMenu::DeathScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_DeathScreen_m6949C40F992F4FB2BCF9BFD5FAAECEAC9630D73B (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void Player/<StartEndGame>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartEndGameU3Ed__10__ctor_m5FD5D1F6F448DA1D4E3FB790CDCD7B11BE55737B (U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator Player::RegenerateHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_RegenerateHealth_m054F871EBA4A13E61BE78D466CBE82D8F38CD47D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player/<RegenerateHealth>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegenerateHealthU3Ed__12__ctor_m03ADDC4E6B0C96BCB18CCDAAF82F39762A6C01E6 (U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean Container::insertItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Container_insertItem_mF0BD53A89B1E62A60886453EFFE1F01C306EEA2A (Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void PlayerMovement::toggleInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_toggleInventory_mAB58AE26DC19F3A01B6E69A5FB6CCC5EEE2D1B08 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void PlayerMovement::SetAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_SetAnim_m2085D138147C4FDA65129AB465EADDB595F45528 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator TempDialogue::DialogueLoop(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TempDialogue_DialogueLoop_mCAC95117D6DB9A3EA5680C905A87FF86A5B4D8DE (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dialogue0, const RuntimeMethod* method);
// System.Void TempDialogue/<DialogueLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDialogueLoopU3Ed__12__ctor_mAB3DB36850E10AD69F83D3CB00ACA111E56D9932 (U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean TempDialogue::CheckIfGameBeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TempDialogue_CheckIfGameBeat_mB0D860F1E49737AC2B3ECDB3199F913781CCE7BF (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, const RuntimeMethod* method);
// System.Void TempDialogue::PlugDialogue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempDialogue_PlugDialogue_mBE17240C7B4D319F9E2504E90F0F676C5D564260 (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Collections.IEnumerator Player::StartEndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_StartEndGame_m08E700DE311531B62F06EAA20A6F2403E39FCC02 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Boolean Container::CheckIfContainsID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Container_CheckIfContainsID_mB5DE7DCEFAE5B0C4D85178829287D072B628FF87 (Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6 * __this, int32_t ___ID0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void AttackScript::Swing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackScript_Swing_m4428C17733D1898331B688B4BCE9738F4B2F37D1 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Collections.IEnumerator DialogueChoice::CloseDialogueWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueChoice_CloseDialogueWindow_mDEAC083D42393437BC0C7A5FAFBF9205AE27AE27 (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method);
// System.Void Hotbar::shrinkSlot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_shrinkSlot_mF704CF2B7F50BAEEC0AC806619D5C6A35EAA51A3 (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___x0, const RuntimeMethod* method);
// System.Void Hotbar::expandSlot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_expandSlot_m694A0627DF3E403423F95825920B8AFB54F9AB36 (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___x0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * __this, const RuntimeMethod* method);
// System.Void AttackScript::UpdateItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackScript_UpdateItem_m2CDBABE85B274E29032217E2F82CF40CD04FDE59 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method);
// System.Boolean Player::CollectItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_CollectItem_m4674973FA78A10981C3CB392360C44E4F79ED839 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// System.Void Entity::Heal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Heal_mF3F3A0C2E3C2F5D61EF8EDCD4A7A16DC51643108 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, float ___healAmmount0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackScript_Awake_m917B67B4AC2A84322D512B70E1AA1C797080E247 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEntity_t044863A7B37E4AD27CE78D4B680109A139080095_m510DFC38CA13A2E606DBF067DCF56AD6EC93734E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// entity = GetComponent<Entity>();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_0;
		L_0 = Component_GetComponent_TisEntity_t044863A7B37E4AD27CE78D4B680109A139080095_m510DFC38CA13A2E606DBF067DCF56AD6EC93734E(__this, /*hidden argument*/Component_GetComponent_TisEntity_t044863A7B37E4AD27CE78D4B680109A139080095_m510DFC38CA13A2E606DBF067DCF56AD6EC93734E_RuntimeMethod_var);
		__this->set_entity_14(L_0);
		// LR = GetComponent<LineRenderer>();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_1;
		L_1 = Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A(__this, /*hidden argument*/Component_GetComponent_TisLineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967_mD5BC9EADE1AA529A5299A4D8B020FB49663DAC3A_RuntimeMethod_var);
		__this->set_LR_4(L_1);
		// PS = GetComponent<Player>();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2;
		L_2 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(__this, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		__this->set_PS_15(L_2);
		// hotbar = PS.hotbar;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_3 = __this->get_PS_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_hotbar_18();
		__this->set_hotbar_11(L_4);
		// AS = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_AS_17(L_5);
		// }
		return;
	}
}
// System.Void AttackScript::UpdateItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackScript_UpdateItem_m2CDBABE85B274E29032217E2F82CF40CD04FDE59 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * V_0 = NULL;
	{
		// if (hotbar.GetComponent<MeleeWeapon>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_hotbar_11();
		MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * L_1;
		L_1 = GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3(L_0, /*hidden argument*/GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006e;
		}
	}
	{
		// a = hotbar.GetComponent<MeleeWeapon>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_hotbar_11();
		MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * L_4;
		L_4 = GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3(L_3, /*hidden argument*/GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3_RuntimeMethod_var);
		V_0 = L_4;
		// if(bat==null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_bat_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// bat = Instantiate(a.weaponObject,transform);
		MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * L_7 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ((Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 *)L_7)->get_weaponObject_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		__this->set_bat_8(L_10);
	}

IL_0044:
	{
		// batSR = bat.GetComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_bat_8();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_12;
		L_12 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_11, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_batSR_9(L_12);
		// anim = bat.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_bat_8();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14;
		L_14 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_13, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_anim_7(L_14);
		// canMelee = true;
		__this->set_canMelee_6((bool)1);
		// } else
		return;
	}

IL_006e:
	{
		// canMelee = false;
		__this->set_canMelee_6((bool)0);
		// Destroy(bat.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_bat_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AttackScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackScript_Update_m8D6CC47406B0B81E0CEBD079E9E68A088AE55CC0 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// weaponCooldown += Time.deltaTime;
		float L_0 = __this->get_weaponCooldown_16();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_weaponCooldown_16(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (!PauseMenu.isPaused)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		bool L_2 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_isPaused_4();
		if (L_2)
		{
			goto IL_0256;
		}
	}
	{
		// if (canShoot&& Input.GetMouseButtonDown(0))
		bool L_3 = __this->get_canShoot_5();
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		bool L_4;
		L_4 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// Shoot();
		AttackScript_Shoot_m90DA46CE871925B0BBA2B02951FF4F020CD76EDD(__this, /*hidden argument*/NULL);
		// weaponCooldown = 0;
		__this->set_weaponCooldown_16((0.0f));
		// }
		goto IL_007f;
	}

IL_003f:
	{
		// else if (canMelee && Input.GetMouseButtonDown(0) && weaponCooldown > hotbar.GetComponent<MeleeWeapon>().attackRate)
		bool L_5 = __this->get_canMelee_6();
		if (!L_5)
		{
			goto IL_007f;
		}
	}
	{
		bool L_6;
		L_6 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007f;
		}
	}
	{
		float L_7 = __this->get_weaponCooldown_16();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_hotbar_11();
		MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * L_9;
		L_9 = GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3(L_8, /*hidden argument*/GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3_RuntimeMethod_var);
		float L_10 = ((Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 *)L_9)->get_attackRate_10();
		if ((!(((float)L_7) > ((float)L_10))))
		{
			goto IL_007f;
		}
	}
	{
		// StartCoroutine(StartSwing());
		RuntimeObject* L_11;
		L_11 = AttackScript_StartSwing_m877256A2EF4719A9882DC90479F542B5425CD751(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_11, /*hidden argument*/NULL);
		// weaponCooldown = 0;
		__this->set_weaponCooldown_16((0.0f));
	}

IL_007f:
	{
		// mousePos = new Vector2(Camera.main.ScreenToWorldPoint(Input.mousePosition).x - transform.position.x, Camera.main.ScreenToWorldPoint(Input.mousePosition).y - transform.position.y);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13;
		L_13 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_13, L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_x_2();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_20;
		L_20 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_20, L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), ((float)il2cpp_codegen_subtract((float)L_16, (float)L_19)), ((float)il2cpp_codegen_subtract((float)L_23, (float)L_26)), /*hidden argument*/NULL);
		__this->set_mousePos_13(L_27);
		// if (canMelee)
		bool L_28 = __this->get_canMelee_6();
		if (!L_28)
		{
			goto IL_0256;
		}
	}
	{
		// bat.transform.rotation = Quaternion.Euler(0, 0, Mathf.Rad2Deg * Mathf.Atan2(mousePos.y, mousePos.x));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_mousePos_13();
		float L_32 = L_31->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_mousePos_13();
		float L_34 = L_33->get_x_0();
		float L_35;
		L_35 = atan2f(L_32, L_34);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		L_36 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)(57.2957802f), (float)L_35)), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_30, L_36, /*hidden argument*/NULL);
		// bat.transform.position = new Vector3(transform.position.x + 5 * Mathf.Cos(Mathf.Atan2(mousePos.y, mousePos.x)), transform.position.y - 1 + 5 * Mathf.Sin(Mathf.Atan2(mousePos.y, mousePos.x)), transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_39, /*hidden argument*/NULL);
		float L_41 = L_40.get_x_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = __this->get_address_of_mousePos_13();
		float L_43 = L_42->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_44 = __this->get_address_of_mousePos_13();
		float L_45 = L_44->get_x_0();
		float L_46;
		L_46 = atan2f(L_43, L_45);
		float L_47;
		L_47 = cosf(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_51 = __this->get_address_of_mousePos_13();
		float L_52 = L_51->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_53 = __this->get_address_of_mousePos_13();
		float L_54 = L_53->get_x_0();
		float L_55;
		L_55 = atan2f(L_52, L_54);
		float L_56;
		L_56 = sinf(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_60), ((float)il2cpp_codegen_add((float)L_41, (float)((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_47)))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_50, (float)(1.0f))), (float)((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_56)))), L_59, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_38, L_60, /*hidden argument*/NULL);
		// if (Mathf.Atan2(mousePos.y, mousePos.x) > .6f)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_61 = __this->get_address_of_mousePos_13();
		float L_62 = L_61->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_63 = __this->get_address_of_mousePos_13();
		float L_64 = L_63->get_x_0();
		float L_65;
		L_65 = atan2f(L_62, L_64);
		if ((!(((float)L_65) > ((float)(0.600000024f)))))
		{
			goto IL_01f9;
		}
	}
	{
		// batSR.sortingOrder = entity.sr.sortingOrder - 1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_66 = __this->get_batSR_9();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_67 = __this->get_entity_14();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_68 = L_67->get_sr_7();
		int32_t L_69;
		L_69 = Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0(L_68, /*hidden argument*/NULL);
		Renderer_set_sortingOrder_mAABE4F8F9B158068C8A1582ACE0BFEA3CF499139(L_66, ((int32_t)il2cpp_codegen_subtract((int32_t)L_69, (int32_t)1)), /*hidden argument*/NULL);
		// }
		goto IL_0216;
	}

IL_01f9:
	{
		// batSR.sortingOrder = entity.sr.sortingOrder + 1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_70 = __this->get_batSR_9();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_71 = __this->get_entity_14();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_72 = L_71->get_sr_7();
		int32_t L_73;
		L_73 = Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0(L_72, /*hidden argument*/NULL);
		Renderer_set_sortingOrder_mAABE4F8F9B158068C8A1582ACE0BFEA3CF499139(L_70, ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0216:
	{
		// if (bat.transform.position.x < transform.position.x)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74 = __this->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_74, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76;
		L_76 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_75, /*hidden argument*/NULL);
		float L_77 = L_76.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		L_79 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_78, /*hidden argument*/NULL);
		float L_80 = L_79.get_x_2();
		if ((!(((float)L_77) < ((float)L_80))))
		{
			goto IL_024a;
		}
	}
	{
		// batSR.flipY = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_81 = __this->get_batSR_9();
		SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01(L_81, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_024a:
	{
		// batSR.flipY = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_82 = __this->get_batSR_9();
		SpriteRenderer_set_flipY_m7DFB2D1118142BE6C76470474F2ECAED234B0A01(L_82, (bool)0, /*hidden argument*/NULL);
	}

IL_0256:
	{
		// }
		return;
	}
}
// System.Void AttackScript::Swing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackScript_Swing_m4428C17733D1898331B688B4BCE9738F4B2F37D1 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEntity_t044863A7B37E4AD27CE78D4B680109A139080095_m510DFC38CA13A2E606DBF067DCF56AD6EC93734E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93E27A7CD1598273FBAB8B91FC07DDCF407AFC3D);
		s_Il2CppMethodInitialized = true;
	}
	Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * V_0 = NULL;
	bool V_1 = false;
	Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* V_2 = NULL;
	int32_t V_3 = 0;
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * V_4 = NULL;
	{
		// StartCoroutine(SizeSwingShift());
		RuntimeObject* L_0;
		L_0 = AttackScript_SizeSwingShift_mE872BE82399EBDC54611FDA871EA43B42A8A8656(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// anim.Play("BatSwing");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim_7();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_2, _stringLiteral93E27A7CD1598273FBAB8B91FC07DDCF407AFC3D, /*hidden argument*/NULL);
		// bool hit = false;
		V_1 = (bool)0;
		// Collider2D[] entitiesHit = Physics2D.OverlapCircleAll(bat.transform.position, range, layerEntities);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_range_12();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_8 = __this->get_layerEntities_10();
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_10;
		L_10 = Physics2D_OverlapCircleAll_m1D3E8E59627D524F35EF6C67940DD1121CEE6E7C(L_6, ((float)((float)L_7)), L_9, /*hidden argument*/NULL);
		// foreach (Collider2D entities in entitiesHit)
		V_2 = L_10;
		V_3 = 0;
		goto IL_0096;
	}

IL_0050:
	{
		// foreach (Collider2D entities in entitiesHit)
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_11 = V_2;
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		// if (!entities.isTrigger)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_15 = V_4;
		bool L_16;
		L_16 = Collider2D_get_isTrigger_m2D8D206E7F91ED3AF8AC552E17414CBD7279F6FF(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0092;
		}
	}
	{
		// e = entities.GetComponent<Entity>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17 = V_4;
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_18;
		L_18 = Component_GetComponent_TisEntity_t044863A7B37E4AD27CE78D4B680109A139080095_m510DFC38CA13A2E606DBF067DCF56AD6EC93734E(L_17, /*hidden argument*/Component_GetComponent_TisEntity_t044863A7B37E4AD27CE78D4B680109A139080095_m510DFC38CA13A2E606DBF067DCF56AD6EC93734E_RuntimeMethod_var);
		V_0 = L_18;
		// if (e != null && !e.isFriendly)
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0092;
		}
	}
	{
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_21 = V_0;
		bool L_22 = L_21->get_isFriendly_10();
		if (L_22)
		{
			goto IL_0092;
		}
	}
	{
		// e.TakeDamage(5); //dont hard code this in the future;
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_23 = V_0;
		VirtActionInvoker1< float >::Invoke(6 /* System.Void Entity::TakeDamage(System.Single) */, L_23, (5.0f));
		// e.TakeRecoil(transform, 70);
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_24 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Entity_TakeRecoil_mDFB8CC4A0CC37C449BFFECEC178060CA076D4304(L_24, L_25, ((int32_t)70), /*hidden argument*/NULL);
		// hit = true;
		V_1 = (bool)1;
	}

IL_0092:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0096:
	{
		// foreach (Collider2D entities in entitiesHit)
		int32_t L_27 = V_3;
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_28 = V_2;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		// if (hit&&SoundMaster.soundOn)
		bool L_29 = V_1;
		if (!L_29)
		{
			goto IL_00c6;
		}
	}
	{
		bool L_30 = ((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->get_soundOn_4();
		if (!L_30)
		{
			goto IL_00c6;
		}
	}
	{
		// AS.PlayOneShot(batAttackSounds[Random.Range(0, batAttackSounds.Length)]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_31 = __this->get_AS_17();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_32 = __this->get_batAttackSounds_18();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_33 = __this->get_batAttackSounds_18();
		int32_t L_34;
		L_34 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))), /*hidden argument*/NULL);
		int32_t L_35 = L_34;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_36 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_31, L_36, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator AttackScript::StartSwing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttackScript_StartSwing_m877256A2EF4719A9882DC90479F542B5425CD751 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 * L_0 = (U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 *)il2cpp_codegen_object_new(U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536_il2cpp_TypeInfo_var);
		U3CStartSwingU3Ed__20__ctor_m46DBCCF5B23DB90A84F7CEEE8705A8C52F098C08(L_0, 0, /*hidden argument*/NULL);
		U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator AttackScript::SizeSwingShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttackScript_SizeSwingShift_mE872BE82399EBDC54611FDA871EA43B42A8A8656 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 * L_0 = (U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 *)il2cpp_codegen_object_new(U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923_il2cpp_TypeInfo_var);
		U3CSizeSwingShiftU3Ed__21__ctor_m18F54E9007CED16799969AC547EC878A90A27CAF(L_0, 0, /*hidden argument*/NULL);
		U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void AttackScript::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackScript_Shoot_m90DA46CE871925B0BBA2B02951FF4F020CD76EDD (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// RaycastHit2D ray = Physics2D.Raycast(transform.position, transform.right);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_6;
		L_6 = Physics2D_Raycast_m9DF2A5F7852F9C736CA4F1BABA52DC0AB24ED983(L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (ray)
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_7 = V_0;
		bool L_8;
		L_8 = RaycastHit2D_op_Implicit_m003A4C312DF408EA399F9F6C44BB5DD9D0C75217(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005f;
		}
	}
	{
		// LR.SetPosition(0, transform.position);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_9 = __this->get_LR_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_9, 0, L_11, /*hidden argument*/NULL);
		// LR.SetPosition(1, ray.point);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_12 = __this->get_LR_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = RaycastHit2D_get_point_m10D5AB3B26EAE62583BE35CFA13A3E40BDAF30AE((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_12, 1, L_14, /*hidden argument*/NULL);
		// }
		goto IL_00a7;
	}

IL_005f:
	{
		// LR.SetPosition(0, transform.position);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_15 = __this->get_LR_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_15, 0, L_17, /*hidden argument*/NULL);
		// LR.SetPosition(1, transform.position + transform.right*100);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_18 = __this->get_LR_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_22, (100.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_20, L_23, /*hidden argument*/NULL);
		LineRenderer_SetPosition_mD37DBE4B3E13A838FFD09289BC77DEDB423D620F(L_18, 1, L_24, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		// LR.startColor = new Color(LR.startColor.r, LR.startColor.b, LR.startColor.g, 1);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_25 = __this->get_LR_4();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_26 = __this->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_r_0();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_29 = __this->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30;
		L_30 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_b_2();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_32 = __this->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33;
		L_33 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_35), L_28, L_31, L_34, (1.0f), /*hidden argument*/NULL);
		LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7(L_25, L_35, /*hidden argument*/NULL);
		// LR.endColor = new Color(LR.endColor.r, LR.endColor.b, LR.endColor.g, 1);
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_36 = __this->get_LR_4();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_37 = __this->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_38;
		L_38 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_r_0();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_40 = __this->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		L_41 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_40, /*hidden argument*/NULL);
		float L_42 = L_41.get_b_2();
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_43 = __this->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44;
		L_44 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_43, /*hidden argument*/NULL);
		float L_45 = L_44.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_46), L_39, L_42, L_45, (1.0f), /*hidden argument*/NULL);
		LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2(L_36, L_46, /*hidden argument*/NULL);
		// StartCoroutine(FadeLine());
		RuntimeObject* L_47;
		L_47 = AttackScript_FadeLine_m286E0FD58FBBB5C9A3EF1D4A90CEDC4DB0DF5176(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_48;
		L_48 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_47, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AttackScript::FadeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttackScript_FadeLine_m286E0FD58FBBB5C9A3EF1D4A90CEDC4DB0DF5176 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 * L_0 = (U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 *)il2cpp_codegen_object_new(U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7_il2cpp_TypeInfo_var);
		U3CFadeLineU3Ed__23__ctor_m2222ECADA4C79B9ECDEB805B8C7672DE29E18E3A(L_0, 0, /*hidden argument*/NULL);
		U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void AttackScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackScript__ctor_m787747D2DD99408E8E1AF8EF2E24B08DE5F4EDE3 (AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BuildScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildScript_Start_mB8753CC5834F4B7153495D6EF2778D1502ABCDBA (BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGrid_t22D0DEF54366450C35DA4B795F06534948AA0236_mEAD03C94C9BAD329C821CE3C6681FCEA6A84FEF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_mEACBFF0E0C686B5520256EBA97379F826FF9DE3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA69586E2F8DD8B6019A1FACA4597D98920E154CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAA2F44DE32C68853E4DA7500BA616A2A3B45D89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mineTime = .3f;
		__this->set_mineTime_17((0.300000012f));
		// mineCoolDown = mineTime;
		float L_0 = __this->get_mineTime_17();
		__this->set_mineCoolDown_16(L_0);
		// playerObject = GameObject.Find("player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, /*hidden argument*/NULL);
		__this->set_playerObject_8(L_1);
		// hotbar = playerObject.GetComponent<Player>().hotbar;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_playerObject_8();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_3;
		L_3 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_hotbar_18();
		__this->set_hotbar_14(L_4);
		// gridDiameter=GameObject.Find("Grid").GetComponent<Grid>().cellSize.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAA2F44DE32C68853E4DA7500BA616A2A3B45D89, /*hidden argument*/NULL);
		Grid_t22D0DEF54366450C35DA4B795F06534948AA0236 * L_6;
		L_6 = GameObject_GetComponent_TisGrid_t22D0DEF54366450C35DA4B795F06534948AA0236_mEAD03C94C9BAD329C821CE3C6681FCEA6A84FEF3(L_5, /*hidden argument*/GameObject_GetComponent_TisGrid_t22D0DEF54366450C35DA4B795F06534948AA0236_mEAD03C94C9BAD329C821CE3C6681FCEA6A84FEF3_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Grid_get_cellSize_m350AB6E17937E92D1C02410690D6160792D27B6C(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		__this->set_gridDiameter_7(L_8);
		// sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_9;
		L_9 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_sr_9(L_9);
		// tm = GameObject.Find("Tilemap").GetComponent<Tilemap>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralA69586E2F8DD8B6019A1FACA4597D98920E154CB, /*hidden argument*/NULL);
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_11;
		L_11 = GameObject_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_mEACBFF0E0C686B5520256EBA97379F826FF9DE3F(L_10, /*hidden argument*/GameObject_GetComponent_TisTilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31_mEACBFF0E0C686B5520256EBA97379F826FF9DE3F_RuntimeMethod_var);
		__this->set_tm_10(L_11);
		// AS = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12;
		L_12 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_AS_18(L_12);
		// }
		return;
	}
}
// System.Void BuildScript::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildScript_PlaySound_m679EE6D3000BCCC653D534A2B0FA255949EC2785 (BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (SoundMaster.soundOn)
		bool L_0 = ((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->get_soundOn_4();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// AS.PlayOneShot(x);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_AS_18();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = ___x0;
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void BuildScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildScript_Update_m8DC01030B4EA67C973F4210D8D5D21D44579B22A (BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m9B69FA7F307BC43E86DE726E083BF03460733E32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA_m60D8373F2B0D5772718609B01854ED85A08B9978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A_mBBC4C34E25A85DF84EEB6D1C9062FF9073A4C77C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * V_2 = NULL;
	{
		// transform.eulerAngles = new Vector3(0, 0, transform.eulerAngles.z / 1.2f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (0.0f), ((float)((float)L_3/(float)(1.20000005f))), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_4, /*hidden argument*/NULL);
		// mineCoolDown += Time.deltaTime;
		float L_5 = __this->get_mineCoolDown_16();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_mineCoolDown_16(((float)il2cpp_codegen_add((float)L_5, (float)L_6)));
		// mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_7;
		L_7 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_7, L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_9, /*hidden argument*/NULL);
		__this->set_mousePos_4(L_10);
		// roundedPos = new Vector2((Mathf.Round((mousePos.x-gridDiameter/2) / gridDiameter)) * gridDiameter, (Mathf.Round((mousePos.y-gridDiameter/2)/ gridDiameter)) * gridDiameter);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of_mousePos_4();
		float L_12 = L_11->get_x_0();
		float L_13 = __this->get_gridDiameter_7();
		float L_14 = __this->get_gridDiameter_7();
		float L_15;
		L_15 = bankers_roundf(((float)((float)((float)il2cpp_codegen_subtract((float)L_12, (float)((float)((float)L_13/(float)(2.0f)))))/(float)L_14)));
		float L_16 = __this->get_gridDiameter_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of_mousePos_4();
		float L_18 = L_17->get_y_1();
		float L_19 = __this->get_gridDiameter_7();
		float L_20 = __this->get_gridDiameter_7();
		float L_21;
		L_21 = bankers_roundf(((float)((float)((float)il2cpp_codegen_subtract((float)L_18, (float)((float)((float)L_19/(float)(2.0f)))))/(float)L_20)));
		float L_22 = __this->get_gridDiameter_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_23), ((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)), ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), /*hidden argument*/NULL);
		__this->set_roundedPos_5(L_23);
		// transform.position = new Vector3(roundedPos.x+(gridDiameter/2), roundedPos.y+(gridDiameter/2), transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_25 = __this->get_address_of_roundedPos_5();
		float L_26 = L_25->get_x_0();
		float L_27 = __this->get_gridDiameter_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of_roundedPos_5();
		float L_29 = L_28->get_y_1();
		float L_30 = __this->get_gridDiameter_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), ((float)il2cpp_codegen_add((float)L_26, (float)((float)((float)L_27/(float)(2.0f))))), ((float)il2cpp_codegen_add((float)L_29, (float)((float)((float)L_30/(float)(2.0f))))), L_33, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_34, /*hidden argument*/NULL);
		// if (tm.GetTile(tm.WorldToCell(transform.position)) != null)
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_35 = __this->get_tm_10();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_36 = __this->get_tm_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_39;
		L_39 = GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9(L_36, L_38, /*hidden argument*/NULL);
		TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052 * L_40;
		L_40 = Tilemap_GetTile_m611C89C47D6FE68099998192BA57344FCE782B19(L_35, L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_40, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0179;
		}
	}
	{
		// sr.color =new Color(occColor.r,occColor.g,occColor.b,sr.color.a);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_42 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_43 = __this->get_address_of_occColor_12();
		float L_44 = L_43->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_45 = __this->get_address_of_occColor_12();
		float L_46 = L_45->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_47 = __this->get_address_of_occColor_12();
		float L_48 = L_47->get_b_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_49 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_50;
		L_50 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_52), L_44, L_46, L_48, L_51, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_42, L_52, /*hidden argument*/NULL);
		// }
		goto IL_01ba;
	}

IL_0179:
	{
		// sr.color = new Color(empColor.r, empColor.g, empColor.b,sr.color.a);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_53 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_54 = __this->get_address_of_empColor_13();
		float L_55 = L_54->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_56 = __this->get_address_of_empColor_13();
		float L_57 = L_56->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_58 = __this->get_address_of_empColor_13();
		float L_59 = L_58->get_b_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_60 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61;
		L_61 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_60, /*hidden argument*/NULL);
		float L_62 = L_61.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63;
		memset((&L_63), 0, sizeof(L_63));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_63), L_55, L_57, L_59, L_62, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_53, L_63, /*hidden argument*/NULL);
	}

IL_01ba:
	{
		// if ((Mathf.Abs(transform.position.x - playerObject.transform.position.x)) < 15f && (Mathf.Abs(transform.position.y - playerObject.transform.position.y)) < 15)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_64, /*hidden argument*/NULL);
		float L_66 = L_65.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = __this->get_playerObject_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_67, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69;
		L_69 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_68, /*hidden argument*/NULL);
		float L_70 = L_69.get_x_2();
		float L_71;
		L_71 = fabsf(((float)il2cpp_codegen_subtract((float)L_66, (float)L_70)));
		if ((!(((float)L_71) < ((float)(15.0f)))))
		{
			goto IL_04f0;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73;
		L_73 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = __this->get_playerObject_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_75, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_76, /*hidden argument*/NULL);
		float L_78 = L_77.get_y_3();
		float L_79;
		L_79 = fabsf(((float)il2cpp_codegen_subtract((float)L_74, (float)L_78)));
		if ((!(((float)L_79) < ((float)(15.0f)))))
		{
			goto IL_04f0;
		}
	}
	{
		// if (Input.GetMouseButton(1))
		bool L_80;
		L_80 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_035a;
		}
	}
	{
		// if (hotbar.GetComponent<BuildingBlock>() != null &&hotbar.GetComponent<Hotbar>().slotItem!=null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = __this->get_hotbar_14();
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_82;
		L_82 = GameObject_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m9B69FA7F307BC43E86DE726E083BF03460733E32(L_81, /*hidden argument*/GameObject_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m9B69FA7F307BC43E86DE726E083BF03460733E32_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_83;
		L_83 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_82, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_83)
		{
			goto IL_034e;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84 = __this->get_hotbar_14();
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_85;
		L_85 = GameObject_GetComponent_TisHotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA_m60D8373F2B0D5772718609B01854ED85A08B9978(L_84, /*hidden argument*/GameObject_GetComponent_TisHotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA_m60D8373F2B0D5772718609B01854ED85A08B9978_RuntimeMethod_var);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_86 = L_85->get_slotItem_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_87;
		L_87 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_86, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_034e;
		}
	}
	{
		// block = hotbar.GetComponent<BuildingBlock>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = __this->get_hotbar_14();
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_89;
		L_89 = GameObject_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m9B69FA7F307BC43E86DE726E083BF03460733E32(L_88, /*hidden argument*/GameObject_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m9B69FA7F307BC43E86DE726E083BF03460733E32_RuntimeMethod_var);
		__this->set_block_15(L_89);
		// if (block.quantity > 0 && tm.GetTile(tm.WorldToCell(transform.position)) == null)
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_90 = __this->get_block_15();
		int32_t L_91 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_90)->get_quantity_9();
		if ((((int32_t)L_91) <= ((int32_t)0)))
		{
			goto IL_0479;
		}
	}
	{
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_92 = __this->get_tm_10();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_93 = __this->get_tm_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
		L_95 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_94, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_96;
		L_96 = GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9(L_93, L_95, /*hidden argument*/NULL);
		TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052 * L_97;
		L_97 = Tilemap_GetTile_m611C89C47D6FE68099998192BA57344FCE782B19(L_92, L_96, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_98;
		L_98 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_97, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_98)
		{
			goto IL_0479;
		}
	}
	{
		// tm.SetTile(tm.WorldToCell(transform.position), block.blockTilePrefab);
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_99 = __this->get_tm_10();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_100 = __this->get_tm_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101;
		L_101 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_102;
		L_102 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_101, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_103;
		L_103 = GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9(L_100, L_102, /*hidden argument*/NULL);
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_104 = __this->get_block_15();
		RuleTile_t76E135A8032B2F2C0D4E6C50D2DF483C9DFA17F0 * L_105 = L_104->get_blockTilePrefab_10();
		Tilemap_SetTile_mDA8C773A2FF8D6744BE268AE9D77CC3FB2A5D862(L_99, L_103, L_105, /*hidden argument*/NULL);
		// PlaySound(blockPlace);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_106 = __this->get_blockPlace_21();
		BuildScript_PlaySound_m679EE6D3000BCCC653D534A2B0FA255949EC2785(__this, L_106, /*hidden argument*/NULL);
		// block.quantity--;
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_107 = __this->get_block_15();
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_108 = L_107;
		int32_t L_109 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_108)->get_quantity_9();
		((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_108)->set_quantity_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_109, (int32_t)1)));
		// int a = hotbar.GetComponent<Hotbar>().slotItem.GetComponent<BuildingBlock>().quantity--;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_110 = __this->get_hotbar_14();
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_111;
		L_111 = GameObject_GetComponent_TisHotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA_m60D8373F2B0D5772718609B01854ED85A08B9978(L_110, /*hidden argument*/GameObject_GetComponent_TisHotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA_m60D8373F2B0D5772718609B01854ED85A08B9978_RuntimeMethod_var);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_112 = L_111->get_slotItem_9();
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_113;
		L_113 = Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463(L_112, /*hidden argument*/Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463_RuntimeMethod_var);
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_114 = L_113;
		int32_t L_115 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_114)->get_quantity_9();
		V_1 = L_115;
		int32_t L_116 = V_1;
		((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_114)->set_quantity_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)1)));
		int32_t L_117 = V_1;
		V_0 = L_117;
		// if (a > block.quantity)
		int32_t L_118 = V_0;
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_119 = __this->get_block_15();
		int32_t L_120 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_119)->get_quantity_9();
		if ((((int32_t)L_118) <= ((int32_t)L_120)))
		{
			goto IL_0339;
		}
	}
	{
		// block.quantity = a;
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_121 = __this->get_block_15();
		int32_t L_122 = V_0;
		((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_121)->set_quantity_9(L_122);
	}

IL_0339:
	{
		// hotbar.GetComponent<Hotbar>().UpdateSlotText();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123 = __this->get_hotbar_14();
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_124;
		L_124 = GameObject_GetComponent_TisHotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA_m60D8373F2B0D5772718609B01854ED85A08B9978(L_123, /*hidden argument*/GameObject_GetComponent_TisHotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA_m60D8373F2B0D5772718609B01854ED85A08B9978_RuntimeMethod_var);
		Hotbar_UpdateSlotText_mBF1E059F25C406893253DD3D1580FA68D42BD93A(L_124, /*hidden argument*/NULL);
		// }
		goto IL_0479;
	}

IL_034e:
	{
		// block = null;
		__this->set_block_15((BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 *)NULL);
		// } else if (Input.GetMouseButton(0) && mineCoolDown >= mineTime)
		goto IL_0479;
	}

IL_035a:
	{
		// } else if (Input.GetMouseButton(0) && mineCoolDown >= mineTime)
		bool L_125;
		L_125 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_0479;
		}
	}
	{
		float L_126 = __this->get_mineCoolDown_16();
		float L_127 = __this->get_mineTime_17();
		if ((!(((float)L_126) >= ((float)L_127))))
		{
			goto IL_0479;
		}
	}
	{
		// if (tm.GetTile(tm.WorldToCell(transform.position)) != null)
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_128 = __this->get_tm_10();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_129 = __this->get_tm_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_130;
		L_130 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
		L_131 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_130, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_132;
		L_132 = GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9(L_129, L_131, /*hidden argument*/NULL);
		TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052 * L_133;
		L_133 = Tilemap_GetTile_m611C89C47D6FE68099998192BA57344FCE782B19(L_128, L_132, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_134;
		L_134 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_133, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_134)
		{
			goto IL_0479;
		}
	}
	{
		// TileData a = tm.GetInstantiatedObject(tm.WorldToCell(transform.position)).GetComponent<TileData>();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_135 = __this->get_tm_10();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_136 = __this->get_tm_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_137;
		L_137 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_138;
		L_138 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_137, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_139;
		L_139 = GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9(L_136, L_138, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_140;
		L_140 = Tilemap_GetInstantiatedObject_mB68E32D09E95636B06E70E56642B5738CDA47680(L_135, L_139, /*hidden argument*/NULL);
		TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * L_141;
		L_141 = GameObject_GetComponent_TisTileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A_mBBC4C34E25A85DF84EEB6D1C9062FF9073A4C77C(L_140, /*hidden argument*/GameObject_GetComponent_TisTileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A_mBBC4C34E25A85DF84EEB6D1C9062FF9073A4C77C_RuntimeMethod_var);
		V_2 = L_141;
		// if (!a.isUnbreakable)
		TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * L_142 = V_2;
		bool L_143 = L_142->get_isUnbreakable_6();
		if (L_143)
		{
			goto IL_0479;
		}
	}
	{
		// a.durability -= 20;
		TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * L_144 = V_2;
		TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * L_145 = L_144;
		int32_t L_146 = L_145->get_durability_5();
		L_145->set_durability_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_146, (int32_t)((int32_t)20))));
		// mineCoolDown = 0;
		__this->set_mineCoolDown_16((0.0f));
		// transform.eulerAngles = new Vector3(0, 0, Random.Range(30,45));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_147;
		L_147 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_148;
		L_148 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)30), ((int32_t)45), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149;
		memset((&L_149), 0, sizeof(L_149));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_149), (0.0f), (0.0f), ((float)((float)L_148)), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_147, L_149, /*hidden argument*/NULL);
		// if (a.durability <= 0) {
		TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * L_150 = V_2;
		int32_t L_151 = L_150->get_durability_5();
		if ((((int32_t)L_151) > ((int32_t)0)))
		{
			goto IL_046d;
		}
	}
	{
		// Instantiate(a.buildingBlock, transform.position, transform.rotation);
		TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * L_152 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_153 = L_152->get_buildingBlock_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_154;
		L_154 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_155;
		L_155 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_154, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_156;
		L_156 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_157;
		L_157 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_156, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_158;
		L_158 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_153, L_155, L_157, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// tm.SetTile(tm.WorldToCell(transform.position), null);
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_159 = __this->get_tm_10();
		Tilemap_t0A1D80C1C0EDF8BDB0A2E274DC0826EF03642F31 * L_160 = __this->get_tm_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_161;
		L_161 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_162;
		L_162 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_161, /*hidden argument*/NULL);
		Vector3Int_t197C3BA05CF19F1A22D40F8AE64CD4102AFB77EA  L_163;
		L_163 = GridLayout_WorldToCell_m82CAD765015D9D3B8E1545EC7C5CB7C231D507A9(L_160, L_162, /*hidden argument*/NULL);
		Tilemap_SetTile_mDA8C773A2FF8D6744BE268AE9D77CC3FB2A5D862(L_159, L_163, (TileBase_t151317678DF54EED207F0AD6F4C590272B9AA052 *)NULL, /*hidden argument*/NULL);
		// PlaySound(blockBreak);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_164 = __this->get_blockBreak_20();
		BuildScript_PlaySound_m679EE6D3000BCCC653D534A2B0FA255949EC2785(__this, L_164, /*hidden argument*/NULL);
		// }
		goto IL_0479;
	}

IL_046d:
	{
		// PlaySound(blockHit);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_165 = __this->get_blockHit_19();
		BuildScript_PlaySound_m679EE6D3000BCCC653D534A2B0FA255949EC2785(__this, L_165, /*hidden argument*/NULL);
	}

IL_0479:
	{
		// if (sr.color.a < 1)
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_166 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_167;
		L_167 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_166, /*hidden argument*/NULL);
		float L_168 = L_167.get_a_3();
		if ((!(((float)L_168) < ((float)(1.0f)))))
		{
			goto IL_055d;
		}
	}
	{
		// sr.color = new Color(sr.color.r, sr.color.g, sr.color.b,(0.001f + sr.color.a*1.05f));
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_169 = __this->get_sr_9();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_170 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_171;
		L_171 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_170, /*hidden argument*/NULL);
		float L_172 = L_171.get_r_0();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_173 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_174;
		L_174 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_173, /*hidden argument*/NULL);
		float L_175 = L_174.get_g_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_176 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_177;
		L_177 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_176, /*hidden argument*/NULL);
		float L_178 = L_177.get_b_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_179 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_180;
		L_180 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_179, /*hidden argument*/NULL);
		float L_181 = L_180.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_182;
		memset((&L_182), 0, sizeof(L_182));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_182), L_172, L_175, L_178, ((float)il2cpp_codegen_add((float)(0.00100000005f), (float)((float)il2cpp_codegen_multiply((float)L_181, (float)(1.04999995f))))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_169, L_182, /*hidden argument*/NULL);
		// }
		return;
	}

IL_04f0:
	{
		// if (sr.color.a >0)
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_183 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_184;
		L_184 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_183, /*hidden argument*/NULL);
		float L_185 = L_184.get_a_3();
		if ((!(((float)L_185) > ((float)(0.0f)))))
		{
			goto IL_055d;
		}
	}
	{
		// sr.color = new Color(sr.color.r, sr.color.g, sr.color.b, sr.color.a/1.1f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_186 = __this->get_sr_9();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_187 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_188;
		L_188 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_187, /*hidden argument*/NULL);
		float L_189 = L_188.get_r_0();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_190 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_191;
		L_191 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_190, /*hidden argument*/NULL);
		float L_192 = L_191.get_g_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_193 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_194;
		L_194 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_193, /*hidden argument*/NULL);
		float L_195 = L_194.get_b_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_196 = __this->get_sr_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_197;
		L_197 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_196, /*hidden argument*/NULL);
		float L_198 = L_197.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_199;
		memset((&L_199), 0, sizeof(L_199));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_199), L_189, L_192, L_195, ((float)((float)L_198/(float)(1.10000002f))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_186, L_199, /*hidden argument*/NULL);
	}

IL_055d:
	{
		// }
		return;
	}
}
// System.Void BuildScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildScript__ctor_m1CC5A60BF30E90D5C5263A5988C53D784A61BDE9 (BuildScript_t03D291EA73868D7D1330B7363A5A149CB105C525 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BuildingBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BuildingBlock__ctor_mECCC3B99A98C703C699F9DF1DE50150C4EC5E98C (BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * __this, const RuntimeMethod* method)
{
	{
		Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_Start_mFA9D3EAD61A387624F2D8E2AB938D32CB43C2AAD (CameraScript_t62AA38C1604A7163AD920FB5D2AD4C9C39B360B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerObject = GameObject.Find("player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, /*hidden argument*/NULL);
		__this->set_playerObject_4(L_0);
		// }
		return;
	}
}
// System.Void CameraScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_Update_mFD3343EC9B5F59B8D44E7151FA49C7CE88B1936A (CameraScript_t62AA38C1604A7163AD920FB5D2AD4C9C39B360B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF164B67C241F3C67C0F6D0D0CA2449391C0CD635);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 mPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// transform.position = new Vector3(((Mathf.Cos(Mathf.Deg2Rad*(playerObject.transform.eulerAngles.z-90)))*scopeDistance*Input.GetAxis("Shift"))+(playerObject.transform.position.x*5.0f+mPos.x)/6.0f, ((Mathf.Sin(Mathf.Deg2Rad * (playerObject.transform.eulerAngles.z-90))) * scopeDistance* Input.GetAxis("Shift")) +(playerObject.transform.position.y*5.0f+mPos.y)/6.0f,transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_playerObject_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_z_4();
		float L_8;
		L_8 = cosf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)((float)il2cpp_codegen_subtract((float)L_7, (float)(90.0f))))));
		float L_9 = __this->get_scopeDistance_5();
		float L_10;
		L_10 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralF164B67C241F3C67C0F6D0D0CA2449391C0CD635, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_playerObject_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16 = L_15.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_playerObject_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		float L_21;
		L_21 = sinf(((float)il2cpp_codegen_multiply((float)(0.0174532924f), (float)((float)il2cpp_codegen_subtract((float)L_20, (float)(90.0f))))));
		float L_22 = __this->get_scopeDistance_5();
		float L_23;
		L_23 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteralF164B67C241F3C67C0F6D0D0CA2449391C0CD635, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_playerObject_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_0;
		float L_29 = L_28.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)L_10)), (float)((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_14, (float)(5.0f))), (float)L_16))/(float)(6.0f))))), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)), (float)L_23)), (float)((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_27, (float)(5.0f))), (float)L_29))/(float)(6.0f))))), L_32, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_33, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript__ctor_m2F555CA91AB185743DD59C5C093A7F6EE339B863 (CameraScript_t62AA38C1604A7163AD920FB5D2AD4C9C39B360B7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Container::insertItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Container_insertItem_mF0BD53A89B1E62A60886453EFFE1F01C306EEA2A (Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * V_1 = NULL;
	InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* V_2 = NULL;
	int32_t V_3 = 0;
	InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * V_4 = NULL;
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * V_5 = NULL;
	{
		// bool foundMin = false;
		V_0 = (bool)0;
		// InventorySlot a = null;
		V_1 = (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB *)NULL;
		// foreach (InventorySlot slot in slots)
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_0 = __this->get_slots_4();
		V_2 = L_0;
		V_3 = 0;
		goto IL_0079;
	}

IL_000f:
	{
		// foreach (InventorySlot slot in slots)
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// Item x = slot.GetComponent<Item>();
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_5 = V_4;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_6;
		L_6 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_5, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		V_5 = L_6;
		// if (x == null && !foundMin)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_7 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		bool L_9 = V_0;
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		// foundMin = true;
		V_0 = (bool)1;
		// a = slot;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_10 = V_4;
		V_1 = L_10;
		// }
		goto IL_0075;
	}

IL_0031:
	{
		// else if (x!=null&&x.itemID == item.itemID && x.isStackable)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_11 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_13 = V_5;
		int32_t L_14 = L_13->get_itemID_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_15 = ___item0;
		int32_t L_16 = L_15->get_itemID_5();
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0075;
		}
	}
	{
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_17 = V_5;
		bool L_18 = L_17->get_isStackable_8();
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		// slot.addItem(item);
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_19 = V_4;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_20 = ___item0;
		InventorySlot_addItem_m2FB504FE9090A8C7896EDF7D235C500AB3D9C007(L_19, L_20, /*hidden argument*/NULL);
		// if (SoundMaster.soundOn)
		bool L_21 = ((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->get_soundOn_4();
		if (!L_21)
		{
			goto IL_0073;
		}
	}
	{
		// SM.PlaySound(click);
		SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * L_22 = __this->get_SM_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_23 = __this->get_click_6();
		SoundMaster_PlaySound_m643DBD13FBFB6D131816B74DD477BAAA799F1835(L_22, L_23, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// return true;
		return (bool)1;
	}

IL_0075:
	{
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0079:
	{
		// foreach (InventorySlot slot in slots)
		int32_t L_25 = V_3;
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		// if (foundMin)
		bool L_27 = V_0;
		if (!L_27)
		{
			goto IL_00a3;
		}
	}
	{
		// a.InsertItem(item);
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_28 = V_1;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_29 = ___item0;
		InventorySlot_InsertItem_m987690247A7F0F457BA3F11F46E1F99E85DCD6E4(L_28, L_29, /*hidden argument*/NULL);
		// if (SoundMaster.soundOn)
		bool L_30 = ((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->get_soundOn_4();
		if (!L_30)
		{
			goto IL_00a1;
		}
	}
	{
		// SM.PlaySound(click);
		SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * L_31 = __this->get_SM_5();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_32 = __this->get_click_6();
		SoundMaster_PlaySound_m643DBD13FBFB6D131816B74DD477BAAA799F1835(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		// return true;
		return (bool)1;
	}

IL_00a3:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Container::CheckIfContainsID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Container_CheckIfContainsID_mB5DE7DCEFAE5B0C4D85178829287D072B628FF87 (Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6 * __this, int32_t ___ID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* V_0 = NULL;
	int32_t V_1 = 0;
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * V_2 = NULL;
	{
		// foreach(InventorySlot slot in slots)
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_0 = __this->get_slots_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_000b:
	{
		// foreach(InventorySlot slot in slots)
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// Item x = slot.GetComponent<Item>();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5;
		L_5 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_4, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		V_2 = L_5;
		// if (x!=null&&x.itemID == ID)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0028;
		}
	}
	{
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_8 = V_2;
		int32_t L_9 = L_8->get_itemID_5();
		int32_t L_10 = ___ID0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0028;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0028:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_002c:
	{
		// foreach(InventorySlot slot in slots)
		int32_t L_12 = V_1;
		InventorySlotU5BU5D_t6FE7117369E76452CE0BB0B96248E159F84DA55C* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Container::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container__ctor_mBF26C4943BFA50AA0839951E3004F955E2E729CA (Container_tBA1C4938F2CF09197F694D3180CE85B7D88A5CC6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueChoice::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueChoice_Awake_m338D11F43D6DB466C197A320EBD588CF29C8642D (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral175EDCE3F89A5DFCE783E8CB381069DCEAC8F978);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		// window = transform.parent.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		__this->set_window_21(L_2);
		// qualified = true;
		__this->set_qualified_19((bool)1);
		// p = GameObject.Find("Player").GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4;
		L_4 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_3, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		__this->set_p_14(L_4);
		// par = transform.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_5, /*hidden argument*/NULL);
		__this->set_par_18(L_6);
		// myText = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7;
		L_7 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_myText_17(L_7);
		// myText.text = thisText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_myText_17();
		String_t* L_9 = __this->get_thisText_10();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
		// DialogueOnScreen = GameObject.Find("DialogueBox").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral175EDCE3F89A5DFCE783E8CB381069DCEAC8F978, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11;
		L_11 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_10, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_DialogueOnScreen_16(L_11);
		// if (skillReq.Length > 0)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = __this->get_skillReq_12();
		if (!(((RuntimeArray*)L_12)->max_length))
		{
			goto IL_0142;
		}
	}
	{
		// GetComponent<Button>().interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13;
		L_13 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_13, (bool)0, /*hidden argument*/NULL);
		// qualified = false;
		__this->set_qualified_19((bool)0);
		// for(int x = 0; x<skillReq.Length; x++)
		V_1 = 0;
		goto IL_0134;
	}

IL_009b:
	{
		// if ((int)p.GetType().GetField(skillReq[x]).GetValue(p) >= skillValueReq[x])
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_14 = __this->get_p_14();
		Type_t * L_15;
		L_15 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_14, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = __this->get_skillReq_12();
		int32_t L_17 = V_1;
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		FieldInfo_t * L_20;
		L_20 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_15, L_19, /*hidden argument*/NULL);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_21 = __this->get_p_14();
		RuntimeObject * L_22;
		L_22 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_20, L_21);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = __this->get_skillValueReq_13();
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		if ((((int32_t)((*(int32_t*)((int32_t*)UnBox(L_22, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))))) < ((int32_t)L_26)))
		{
			goto IL_0130;
		}
	}
	{
		// s = skillReq[x];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = __this->get_skillReq_12();
		int32_t L_28 = V_1;
		int32_t L_29 = L_28;
		String_t* L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_0 = L_30;
		// s = char.ToUpper(s[0]) + s.Substring(1);
		String_t* L_31 = V_0;
		Il2CppChar L_32;
		L_32 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_31, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		Il2CppChar L_33;
		L_33 = Char_ToUpper_m7BE77639C5F8EC99F56A729C0D26A684A85F0BC7(L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		String_t* L_34;
		L_34 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_2), /*hidden argument*/NULL);
		String_t* L_35 = V_0;
		String_t* L_36;
		L_36 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_35, 1, /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_34, L_36, /*hidden argument*/NULL);
		V_0 = L_37;
		// myText.text = GetComponent<Text>().text + " [" + s + "]";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = __this->get_myText_17();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39;
		L_39 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		String_t* L_40;
		L_40 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_39);
		String_t* L_41 = V_0;
		String_t* L_42;
		L_42 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_40, _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5, L_41, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_42);
		// GetComponent<Button>().interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_43;
		L_43 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_43, (bool)1, /*hidden argument*/NULL);
		// qualified = true;
		__this->set_qualified_19((bool)1);
	}

IL_0130:
	{
		// for(int x = 0; x<skillReq.Length; x++)
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_0134:
	{
		// for(int x = 0; x<skillReq.Length; x++)
		int32_t L_45 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_46 = __this->get_skillReq_12();
		if ((((int32_t)L_45) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_009b;
		}
	}

IL_0142:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator DialogueChoice::ShiftWindowRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueChoice_ShiftWindowRight_m1D0C47824C1B38E59D00F3051473A2E46CD1E17A (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 * L_0 = (U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 *)il2cpp_codegen_object_new(U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783_il2cpp_TypeInfo_var);
		U3CShiftWindowRightU3Ed__19__ctor_m6F4D39B91E686DE396EDB05880C5FB09B3E1E302(L_0, 0, /*hidden argument*/NULL);
		U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator DialogueChoice::CloseDialogueWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueChoice_CloseDialogueWindow_mDEAC083D42393437BC0C7A5FAFBF9205AE27AE27 (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF * L_0 = (U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF *)il2cpp_codegen_object_new(U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF_il2cpp_TypeInfo_var);
		U3CCloseDialogueWindowU3Ed__20__ctor_mD4FAE0F8C5247C2A8BDBAE3CBBE6434927BE8FF4(L_0, 0, /*hidden argument*/NULL);
		U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator DialogueChoice::OpenDialogueWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueChoice_OpenDialogueWindow_mFE658F7EC09511EA738F63788514DFCCF3E1456E (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 * L_0 = (U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 *)il2cpp_codegen_object_new(U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4_il2cpp_TypeInfo_var);
		U3COpenDialogueWindowU3Ed__21__ctor_mC9D0A8EE24408AA45264AB632BD65DA4D8A071E6(L_0, 0, /*hidden argument*/NULL);
		U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DialogueChoice::ChooseDialogueOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueChoice_ChooseDialogueOption_mBEC416871FB1D4ECA072D21C8F1F615966E6C7BE (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82_m98EB14B2D684AB2CAD077F9B403EE218C29AD079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tB01A3C34C6771AA2422AFB70485E860D8CA3DAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6398C77D5214C9281A21E79C482D77B481812FD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E970ADB7B2CB9EC4B24CF97A6534BE1DA70386);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0BAF632B4E9F819E3262ABF4FA71FE9F385EC42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE586D26F2F2D2462A182B41FF7B0C66457161A10);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	float V_1 = 0.0f;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// if (makeVisible)
		bool L_0 = __this->get_makeVisible_8();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// StartCoroutine(ShiftWindowRight());
		RuntimeObject* L_1;
		L_1 = DialogueChoice_ShiftWindowRight_m1D0C47824C1B38E59D00F3051473A2E46CD1E17A(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// if (makeContent)
		bool L_3 = __this->get_makeContent_5();
		// if (makeFrown)
		bool L_4 = __this->get_makeFrown_4();
		// if (makeNeutral)
		bool L_5 = __this->get_makeNeutral_6();
		// if (makeShocked)
		bool L_6 = __this->get_makeShocked_7();
		// if (thisText != "Continue")
		String_t* L_7 = __this->get_thisText_10();
		bool L_8;
		L_8 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_7, _stringLiteralE586D26F2F2D2462A182B41FF7B0C66457161A10, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		// DialogueOnScreen.text+="<color=#34abef>" + thisText + "</color> \n\n";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_DialogueOnScreen_16();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = L_9;
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		String_t* L_12 = __this->get_thisText_10();
		String_t* L_13;
		L_13 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(L_11, _stringLiteral6398C77D5214C9281A21E79C482D77B481812FD7, L_12, _stringLiteralD0BAF632B4E9F819E3262ABF4FA71FE9F385EC42, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
	}

IL_0069:
	{
		// float offset = 0;
		V_1 = (0.0f);
		// GameObject[] oldOnes= GameObject.FindGameObjectsWithTag("Dialogue");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14;
		L_14 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralC8E970ADB7B2CB9EC4B24CF97A6534BE1DA70386, /*hidden argument*/NULL);
		V_2 = L_14;
		// for(int x = 0; x <oldOnes.Length; x++)
		V_3 = 0;
		goto IL_009a;
	}

IL_007e:
	{
		// if (oldOnes[x] != this.gameObject)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0096;
		}
	}
	{
		// Destroy(oldOnes[x]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_24, /*hidden argument*/NULL);
	}

IL_0096:
	{
		// for(int x = 0; x <oldOnes.Length; x++)
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_009a:
	{
		// for(int x = 0; x <oldOnes.Length; x++)
		int32_t L_26 = V_3;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = V_2;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_007e;
		}
	}
	{
		// if (!hasPause)
		bool L_28 = __this->get_hasPause_20();
		if (L_28)
		{
			goto IL_0170;
		}
	}
	{
		// int y = 0;
		V_4 = 0;
		// for (int x = 0; x < choices.Length; x++)
		V_5 = 0;
		goto IL_0161;
	}

IL_00b6:
	{
		// dia = Instantiate(choices[x], par, true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_29 = __this->get_choices_11();
		int32_t L_30 = V_5;
		int32_t L_31 = L_30;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = __this->get_par_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7(L_32, L_33, (bool)1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		V_0 = L_34;
		// dia.GetComponent<RectTransform>().anchoredPosition = new Vector2(.4f, (-2.0f - (x - y) * .8f) - (offset * .6f));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_36;
		L_36 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_35, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		int32_t L_37 = V_5;
		int32_t L_38 = V_4;
		float L_39 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_40), (0.400000006f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(-2.0f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38)))), (float)(0.800000012f))))), (float)((float)il2cpp_codegen_multiply((float)L_39, (float)(0.600000024f))))), /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_36, L_40, /*hidden argument*/NULL);
		// dia.GetComponent<RectTransform>().localScale = new Vector3(.025f, .025f, 1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = V_0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_42;
		L_42 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_41, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_43), (0.0250000004f), (0.0250000004f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_42, L_43, /*hidden argument*/NULL);
		// Canvas.ForceUpdateCanvases();
		Canvas_ForceUpdateCanvases_m0D46827299273BBA96CE6FA6B8A12B8989B52ECE(/*hidden argument*/NULL);
		// if (dia.GetComponent<DialogueChoice>().qualified == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = V_0;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_45;
		L_45 = GameObject_GetComponent_TisDialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82_m98EB14B2D684AB2CAD077F9B403EE218C29AD079(L_44, /*hidden argument*/GameObject_GetComponent_TisDialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82_m98EB14B2D684AB2CAD077F9B403EE218C29AD079_RuntimeMethod_var);
		bool L_46 = L_45->get_qualified_19();
		if (!L_46)
		{
			goto IL_014f;
		}
	}
	{
		// offset += dia.GetComponent<Text>().cachedTextGenerator.lines.Count;
		float L_47 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = V_0;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_49;
		L_49 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_48, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * L_50;
		L_50 = Text_get_cachedTextGenerator_mC1CA3F78904E1B2E5759DEA6EFDB1C13AB3BBB65(L_49, /*hidden argument*/NULL);
		RuntimeObject* L_51;
		L_51 = TextGenerator_get_lines_m3277C5BEA1392607B39B8CA03E902CE5AD7CEFC1(L_50, /*hidden argument*/NULL);
		int32_t L_52;
		L_52 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count() */, ICollection_1_tB01A3C34C6771AA2422AFB70485E860D8CA3DAC5_il2cpp_TypeInfo_var, L_51);
		V_1 = ((float)il2cpp_codegen_add((float)L_47, (float)((float)((float)L_52))));
		// offset -= 1;
		float L_53 = V_1;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_53, (float)(1.0f)));
		// }
		goto IL_015b;
	}

IL_014f:
	{
		// Destroy(dia);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_54, /*hidden argument*/NULL);
		// y++;
		int32_t L_55 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_015b:
	{
		// for (int x = 0; x < choices.Length; x++)
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0161:
	{
		// for (int x = 0; x < choices.Length; x++)
		int32_t L_57 = V_5;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_58 = __this->get_choices_11();
		if ((((int32_t)L_57) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))))
		{
			goto IL_00b6;
		}
	}

IL_0170:
	{
		// GetComponent<Text>().text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_59;
		L_59 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_59, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// GetComponent<Button>().enabled = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_60;
		L_60 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_60, (bool)0, /*hidden argument*/NULL);
		// StartCoroutine(WriteToTextBox());
		RuntimeObject* L_61;
		L_61 = DialogueChoice_WriteToTextBox_mAF908ED8A56DD92CE0BBE6C06DA2B4A3305E2D0F(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_62;
		L_62 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_61, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DialogueChoice::WriteToTextBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueChoice_WriteToTextBox_mAF908ED8A56DD92CE0BBE6C06DA2B4A3305E2D0F (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E * L_0 = (U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E *)il2cpp_codegen_object_new(U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E_il2cpp_TypeInfo_var);
		U3CWriteToTextBoxU3Ed__23__ctor_m9B62C55D11DFF30FD20ADB5D54F64944A8301B11(L_0, 0, /*hidden argument*/NULL);
		U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DialogueChoice::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueChoice__ctor_m50CC4EE08F1A7F2C75AD0DDA41F00278F50760F4 (DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_15(L_0);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_22(L_1);
		// anim.Play("Idle");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim_15();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_2, _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, /*hidden argument*/NULL);
		// isAggrod = false;
		__this->set_isAggrod_16((bool)0);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (health <= 0)
		float L_0 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_health_4();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// sortLayers();
		Entity_sortLayers_m02B956D45A90E31A235A934BB100105FF213958E(__this, /*hidden argument*/NULL);
		// angleToPlayer = Mathf.Atan2(playerY, playerX);
		float L_2 = __this->get_playerY_19();
		float L_3 = __this->get_playerX_18();
		float L_4;
		L_4 = atan2f(L_2, L_3);
		__this->set_angleToPlayer_23(L_4);
		// if (isAggrod)
		bool L_5 = __this->get_isAggrod_16();
		if (!L_5)
		{
			goto IL_010c;
		}
	}
	{
		// playerX = player.transform.position.x - transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_player_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		__this->set_playerX_18(((float)il2cpp_codegen_subtract((float)L_9, (float)L_12)));
		// playerY = player.transform.position.y - transform.position.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_player_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		__this->set_playerY_19(((float)il2cpp_codegen_subtract((float)L_16, (float)L_19)));
		// if (Mathf.Abs(playerX)> (Mathf.Abs(playerY))){
		float L_20 = __this->get_playerX_18();
		float L_21;
		L_21 = fabsf(L_20);
		float L_22 = __this->get_playerY_19();
		float L_23;
		L_23 = fabsf(L_22);
		if ((!(((float)L_21) > ((float)L_23))))
		{
			goto IL_00cf;
		}
	}
	{
		// if (playerX > 0)
		float L_24 = __this->get_playerX_18();
		if ((!(((float)L_24) > ((float)(0.0f)))))
		{
			goto IL_00c6;
		}
	}
	{
		// orientation = 1;
		__this->set_orientation_20(1);
		goto IL_00ec;
	}

IL_00c6:
	{
		// orientation = 3;
		__this->set_orientation_20(3);
		// }
		goto IL_00ec;
	}

IL_00cf:
	{
		// if (playerY > 0)
		float L_25 = __this->get_playerY_19();
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_00e5;
		}
	}
	{
		// orientation = 4;
		__this->set_orientation_20(4);
		goto IL_00ec;
	}

IL_00e5:
	{
		// orientation = 2;
		__this->set_orientation_20(2);
	}

IL_00ec:
	{
		// if (orientation != lastOrientation)
		int32_t L_26 = __this->get_orientation_20();
		int32_t L_27 = __this->get_lastOrientation_21();
		if ((((int32_t)L_26) == ((int32_t)L_27)))
		{
			goto IL_010c;
		}
	}
	{
		// lastOrientation = orientation;
		int32_t L_28 = __this->get_orientation_20();
		__this->set_lastOrientation_21(L_28);
		// SetAnim();
		Enemy_SetAnim_m8F3D2542A22AE1EE64F030419257B575AE363F85(__this, /*hidden argument*/NULL);
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void Enemy::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_FixedUpdate_m66DA7C35B28A130AF6359CE888D789DC85FF18FE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// if(isAggrod)
		bool L_0 = __this->get_isAggrod_16();
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		// rb.velocity = new Vector2((Mathf.Cos(angleToPlayer) * speed)+recoil.x, (Mathf.Sin(angleToPlayer) * speed)+recoil.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_1 = __this->get_rb_22();
		float L_2 = __this->get_angleToPlayer_23();
		float L_3;
		L_3 = cosf(L_2);
		int32_t L_4 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_speed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_address_of_recoil_11();
		float L_6 = L_5->get_x_0();
		float L_7 = __this->get_angleToPlayer_23();
		float L_8;
		L_8 = sinf(L_7);
		int32_t L_9 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_speed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_address_of_recoil_11();
		float L_11 = L_10->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_3, (float)((float)((float)L_4)))), (float)L_6)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)((float)((float)L_9)))), (float)L_11)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_1, L_12, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// SoftenRecoil();
		Entity_SoftenRecoil_m20AA0962D687C84D084412B8D29C44DF9E50B9E2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::SetAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_SetAnim_m8F3D2542A22AE1EE64F030419257B575AE363F85 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (orientation == 1)
		int32_t L_0 = __this->get_orientation_20();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// anim.Play("Right");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_anim_15();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_1, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		// else if (orientation == 2)
		int32_t L_2 = __this->get_orientation_20();
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0034;
		}
	}
	{
		// anim.Play("Down");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_anim_15();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_3, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, /*hidden argument*/NULL);
		return;
	}

IL_0034:
	{
		// else if (orientation == 3)
		int32_t L_4 = __this->get_orientation_20();
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_004e;
		}
	}
	{
		// anim.Play("Left");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_anim_15();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_5, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, /*hidden argument*/NULL);
		return;
	}

IL_004e:
	{
		// else if (orientation == 4)
		int32_t L_6 = __this->get_orientation_20();
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0067;
		}
	}
	{
		// anim.Play("Up");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_anim_15();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_7, _stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter2D_mDECB4702894034560FBA7606CDC45A5B12EB0B38 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// isAggrod = true;
		__this->set_isAggrod_16((bool)1);
		// player = collision.gameObject;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		__this->set_player_17(L_5);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter2D_m47EAF0D1D60EC5BF3953975EA6BF15189DF82A12 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Player")
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// e = collision.gameObject.GetComponent<Player>();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_4 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_4, /*hidden argument*/NULL);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6;
		L_6 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		// e.TakeDamage(damage);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_7 = L_6;
		int32_t L_8 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_damage_8();
		VirtActionInvoker1< float >::Invoke(6 /* System.Void Entity::TakeDamage(System.Single) */, L_7, ((float)((float)L_8)));
		// e.TakeRecoil(transform,50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Entity_TakeRecoil_mDFB8CC4A0CC37C449BFFECEC178060CA076D4304(L_7, L_9, ((int32_t)50), /*hidden argument*/NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		Entity__ctor_mA22D51D64B97E8F6F879E72C8E0DE7D26ED0C824(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Entity::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Awake_m53067BAC9D02222618330E6DC07F457399362C8A (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (health == 0)
		float L_0 = __this->get_health_4();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0018;
		}
	}
	{
		// health = 10;
		__this->set_health_4((10.0f));
	}

IL_0018:
	{
		// if(speed == 0)
		int32_t L_1 = __this->get_speed_6();
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// speed = 5;
		__this->set_speed_6(5);
	}

IL_0027:
	{
		// if(damage == 0)
		int32_t L_2 = __this->get_damage_8();
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		// damage = 15;
		__this->set_damage_8(((int32_t)15));
	}

IL_0037:
	{
		// if(armor == 0)
		float L_3 = __this->get_armor_9();
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		// armor = 1;
		__this->set_armor_9((1.0f));
	}

IL_004f:
	{
		// sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_sr_7(L_4);
		// normalColor = sr.color;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = __this->get_sr_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		L_6 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_5, /*hidden argument*/NULL);
		__this->set_normalColor_13(L_6);
		// }
		return;
	}
}
// System.Void Entity::sortLayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_sortLayers_m02B956D45A90E31A235A934BB100105FF213958E (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method)
{
	{
		// sr.sortingOrder = Mathf.RoundToInt(-2.0f * transform.position.y);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_sr_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)(-2.0f), (float)L_3)), /*hidden argument*/NULL);
		Renderer_set_sortingOrder_mAABE4F8F9B158068C8A1582ACE0BFEA3CF499139(L_0, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Entity::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Update_m4FAC0E7988D34B19805DBB519889B857020642CA (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Entity::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Start_mB86BC6034BA8D34AD2544ED3FD5BB866BFAB0163 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Entity::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_TakeDamage_m59D3969391EAF91533AA7AB6660582769358AB25 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, float ___dam0, const RuntimeMethod* method)
{
	{
		// health = health - (dam / armor);
		float L_0 = __this->get_health_4();
		float L_1 = ___dam0;
		float L_2 = __this->get_armor_9();
		__this->set_health_4(((float)il2cpp_codegen_subtract((float)L_0, (float)((float)((float)L_1/(float)L_2)))));
		// }
		return;
	}
}
// System.Void Entity::Heal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_Heal_mF3F3A0C2E3C2F5D61EF8EDCD4A7A16DC51643108 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, float ___healAmmount0, const RuntimeMethod* method)
{
	{
		// health += healAmmount;
		float L_0 = __this->get_health_4();
		float L_1 = ___healAmmount0;
		__this->set_health_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (health > maxHealth)
		float L_2 = __this->get_health_4();
		float L_3 = __this->get_maxHealth_5();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0028;
		}
	}
	{
		// health = maxHealth;
		float L_4 = __this->get_maxHealth_5();
		__this->set_health_4(L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Entity::SoftenRecoil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_SoftenRecoil_m20AA0962D687C84D084412B8D29C44DF9E50B9E2 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method)
{
	{
		// if (Mathf.Abs(recoil.x) > 0 && Mathf.Abs(recoil.y) > 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of_recoil_11();
		float L_1 = L_0->get_x_0();
		float L_2;
		L_2 = fabsf(L_1);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_recoil_11();
		float L_4 = L_3->get_y_1();
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// recoil = new Vector2(recoil.x / 1.2f, recoil.y / 1.2f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_recoil_11();
		float L_7 = L_6->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_recoil_11();
		float L_9 = L_8->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_10), ((float)((float)L_7/(float)(1.20000005f))), ((float)((float)L_9/(float)(1.20000005f))), /*hidden argument*/NULL);
		__this->set_recoil_11(L_10);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Entity::TakeRecoil(UnityEngine.Transform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity_TakeRecoil_mDFB8CC4A0CC37C449BFFECEC178060CA076D4304 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, int32_t ___mag1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// x = t.position.x - transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_5));
		// y = t.position.y - transform.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___t0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		// float a = Mathf.Atan2(y, x);
		float L_12 = V_0;
		float L_13;
		L_13 = atan2f(((float)il2cpp_codegen_subtract((float)L_8, (float)L_11)), L_12);
		V_1 = L_13;
		// recoil = new Vector2(Mathf.Cos(a) * -mag, Mathf.Sin(a) * -mag);
		float L_14 = V_1;
		float L_15;
		L_15 = cosf(L_14);
		int32_t L_16 = ___mag1;
		float L_17 = V_1;
		float L_18;
		L_18 = sinf(L_17);
		int32_t L_19 = ___mag1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_20), ((float)il2cpp_codegen_multiply((float)L_15, (float)((float)((float)((-L_16)))))), ((float)il2cpp_codegen_multiply((float)L_18, (float)((float)((float)((-L_19)))))), /*hidden argument*/NULL);
		__this->set_recoil_11(L_20);
		// sr.color = damageColor;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_21 = __this->get_sr_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22 = __this->get_damageColor_12();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_21, L_22, /*hidden argument*/NULL);
		// StartCoroutine(ResetColor());
		RuntimeObject* L_23;
		L_23 = Entity_ResetColor_m5E33808AD00815D7A6407CE3564805FBEA9D766E(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_24;
		L_24 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Entity::ResetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Entity_ResetColor_m5E33808AD00815D7A6407CE3564805FBEA9D766E (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 * L_0 = (U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 *)il2cpp_codegen_object_new(U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62_il2cpp_TypeInfo_var);
		U3CResetColorU3Ed__18__ctor_m2E7C4203BF0817C7049DDC4B89271185E4898765(L_0, 0, /*hidden argument*/NULL);
		U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Entity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entity__ctor_mA22D51D64B97E8F6F879E72C8E0DE7D26ED0C824 (Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hotbar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_Start_m4900C22CCA3E14491CC7D1BEDD5F9A5B2D81C886 (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeSlotIndex = 0;
		__this->set_activeSlotIndex_6(0);
		// InsertItem(slots[activeSlotIndex].GetComponent<Item>());
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_slots_4();
		int32_t L_1 = __this->get_activeSlotIndex_6();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_4;
		L_4 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_3, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		Hotbar_InsertItem_mB50F49DB726223B7921AAC9B3C14462445A0544F(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hotbar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_Update_m681B7CBE7FE605C4EA62D9F75D6E1A011A1D3F0D (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, const RuntimeMethod* method)
{
	{
		// scrollCooldown -= Time.deltaTime ;
		float L_0 = __this->get_scrollCooldown_8();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_scrollCooldown_8(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (scrollCooldown <= 0) {
		float L_2 = __this->get_scrollCooldown_8();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0117;
		}
	}
	{
		// if (Input.mouseScrollDelta.y == 1)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7(/*hidden argument*/NULL);
		float L_4 = L_3.get_y_1();
		if ((!(((float)L_4) == ((float)(1.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		// StartCoroutine(Adjust(activeSlotIndex + 1));
		int32_t L_5 = __this->get_activeSlotIndex_6();
		RuntimeObject* L_6;
		L_6 = Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// }
		goto IL_0070;
	}

IL_004a:
	{
		// else if (Input.mouseScrollDelta.y == -1)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7(/*hidden argument*/NULL);
		float L_9 = L_8.get_y_1();
		if ((!(((float)L_9) == ((float)(-1.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		// StartCoroutine(Adjust(activeSlotIndex - 1));
		int32_t L_10 = __this->get_activeSlotIndex_6();
		RuntimeObject* L_11;
		L_11 = Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_11, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// if (Input.GetKeyUp(KeyCode.Alpha1))
		bool L_13;
		L_13 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)49), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0088;
		}
	}
	{
		// StartCoroutine(Adjust(0));
		RuntimeObject* L_14;
		L_14 = Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED(__this, 0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0088:
	{
		// else if (Input.GetKeyUp(KeyCode.Alpha2))
		bool L_16;
		L_16 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)50), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00a0;
		}
	}
	{
		// StartCoroutine(Adjust(1));
		RuntimeObject* L_17;
		L_17 = Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED(__this, 1, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_18;
		L_18 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_17, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a0:
	{
		// else if (Input.GetKeyUp(KeyCode.Alpha3))
		bool L_19;
		L_19 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)51), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b8;
		}
	}
	{
		// StartCoroutine(Adjust(2));
		RuntimeObject* L_20;
		L_20 = Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED(__this, 2, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_21;
		L_21 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_20, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b8:
	{
		// else if (Input.GetKeyUp(KeyCode.Alpha4))
		bool L_22;
		L_22 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)52), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d0;
		}
	}
	{
		// StartCoroutine(Adjust(3));
		RuntimeObject* L_23;
		L_23 = Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED(__this, 3, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_24;
		L_24 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_23, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00d0:
	{
		// else if (Input.GetKeyUp(KeyCode.Alpha5))
		bool L_25;
		L_25 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)53), /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00e8;
		}
	}
	{
		// StartCoroutine(Adjust(4));
		RuntimeObject* L_26;
		L_26 = Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED(__this, 4, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_27;
		L_27 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_26, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00e8:
	{
		// else if (Input.GetKeyUp(KeyCode.Alpha6))
		bool L_28;
		L_28 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)54), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0100;
		}
	}
	{
		// StartCoroutine(Adjust(5));
		RuntimeObject* L_29;
		L_29 = Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED(__this, 5, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_30;
		L_30 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_29, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0100:
	{
		// else if (Input.GetKeyUp(KeyCode.Alpha7))
		bool L_31;
		L_31 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)55), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0117;
		}
	}
	{
		// StartCoroutine(Adjust(6));
		RuntimeObject* L_32;
		L_32 = Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED(__this, 6, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_33;
		L_33 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_32, /*hidden argument*/NULL);
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Hotbar::Adjust(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hotbar_Adjust_m3698900C55CE47B9997FD967A0FE6E9401909CED (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, int32_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * L_0 = (U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E *)il2cpp_codegen_object_new(U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E_il2cpp_TypeInfo_var);
		U3CAdjustU3Ed__8__ctor_m2398A561547F7AC9D14A270278B09391865D9DB5(L_0, 0, /*hidden argument*/NULL);
		U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * L_2 = L_1;
		int32_t L_3 = ___x0;
		L_2->set_x_3(L_3);
		return L_2;
	}
}
// System.Void Hotbar::shrinkSlot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_shrinkSlot_mF704CF2B7F50BAEEC0AC806619D5C6A35EAA51A3 (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InventorySlot a = x.GetComponent<InventorySlot>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___x0;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_1;
		L_1 = GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7(L_0, /*hidden argument*/GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7_RuntimeMethod_var);
		// a.ShiftScale(new Vector3(1, 1, 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		InventorySlot_ShiftScale_m00876E41DDAF245A779B74CAD9F7337EC5C7B50A(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hotbar::expandSlot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_expandSlot_m694A0627DF3E403423F95825920B8AFB54F9AB36 (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InventorySlot a = x.GetComponent<InventorySlot>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___x0;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_1;
		L_1 = GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7(L_0, /*hidden argument*/GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7_RuntimeMethod_var);
		// a.ShiftScale(new Vector3(1.2f, 1.2f, 1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (1.20000005f), (1.20000005f), (1.0f), /*hidden argument*/NULL);
		InventorySlot_ShiftScale_m00876E41DDAF245A779B74CAD9F7337EC5C7B50A(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hotbar::UpdateSlotText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_UpdateSlotText_mBF1E059F25C406893253DD3D1580FA68D42BD93A (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (slotItem.quantity<=0)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0 = __this->get_slotItem_9();
		int32_t L_1 = L_0->get_quantity_9();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(GetComponent<Item>());
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_2;
		L_2 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// slots[activeSlotIndex].GetComponent<InventorySlot>().UpdateText();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_slots_4();
		int32_t L_4 = __this->get_activeSlotIndex_6();
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_7;
		L_7 = GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7(L_6, /*hidden argument*/GameObject_GetComponent_TisInventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB_m95E76F2D29CEA6C4F37D207A9A9D26C17CC455D7_RuntimeMethod_var);
		InventorySlot_UpdateText_mB0ABF69551102BA4F57CA78F004FA389BEBAE56A(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Hotbar::InsertItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar_InsertItem_mB50F49DB726223B7921AAC9B3C14462445A0544F (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_0 = NULL;
	int32_t V_1 = 0;
	FieldInfo_t * V_2 = NULL;
	{
		// if (gameObject.GetComponent<Item>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1;
		L_1 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_0, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Destroy(gameObject.GetComponent<Item>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_4;
		L_4 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_3, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// if (item != null)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5 = ___item0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_007a;
		}
	}
	{
		// gameObject.AddComponent(item.GetType());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_8 = ___item0;
		Type_t * L_9;
		L_9 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_8, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_10;
		L_10 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_7, L_9, /*hidden argument*/NULL);
		// System.Reflection.FieldInfo[] fields = item.GetType().GetFields();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_11 = ___item0;
		Type_t * L_12;
		L_12 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_11, /*hidden argument*/NULL);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_13;
		L_13 = Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372(L_12, /*hidden argument*/NULL);
		// foreach (System.Reflection.FieldInfo field in fields)
		V_0 = L_13;
		V_1 = 0;
		goto IL_0074;
	}

IL_004e:
	{
		// foreach (System.Reflection.FieldInfo field in fields)
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		FieldInfo_t * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
		// field.SetValue(gameObject.GetComponent(item.GetType()), field.GetValue(item));
		FieldInfo_t * L_18 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_20 = ___item0;
		Type_t * L_21;
		L_21 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_20, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_22;
		L_22 = GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473(L_19, L_21, /*hidden argument*/NULL);
		FieldInfo_t * L_23 = V_2;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_24 = ___item0;
		RuntimeObject * L_25;
		L_25 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_23, L_24);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_18, L_22, L_25, /*hidden argument*/NULL);
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0074:
	{
		// foreach (System.Reflection.FieldInfo field in fields)
		int32_t L_27 = V_1;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_004e;
		}
	}

IL_007a:
	{
		// slotItem = item;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_29 = ___item0;
		__this->set_slotItem_9(L_29);
		// StartCoroutine(DelayUpdate(3));
		RuntimeObject* L_30;
		L_30 = Hotbar_DelayUpdate_m171C9936E7105DB6BB21D31211BC61FD790A2AC3(__this, 3, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_31;
		L_31 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_30, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Hotbar::DelayUpdate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hotbar_DelayUpdate_m171C9936E7105DB6BB21D31211BC61FD790A2AC3 (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, int32_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * L_0 = (U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 *)il2cpp_codegen_object_new(U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0_il2cpp_TypeInfo_var);
		U3CDelayUpdateU3Ed__13__ctor_mC957B6B9A4E5AA5D78951DB9B476259B9B976EC7(L_0, 0, /*hidden argument*/NULL);
		U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * L_1 = L_0;
		L_1->set_U3CU3E4__this_3(__this);
		U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * L_2 = L_1;
		int32_t L_3 = ___x0;
		L_2->set_x_2(L_3);
		return L_2;
	}
}
// System.Void Hotbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hotbar__ctor_m75D8EB6FDCE3C694730F46E82A9C348B74DA8C5C (Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Inventory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Start_mD4A36B4F39D7CDE6707542A799D6EF9D88756155 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// posIn = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_posIn_7(L_1);
		// rect = gameObject.GetComponent<RectTransform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		__this->set_rect_10(L_3);
		// posVis = new Vector3(-25f, 15f, rect.position.z);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get_rect_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (-25.0f), (15.0f), L_6, /*hidden argument*/NULL);
		__this->set_posVis_8(L_7);
		// }
		return;
	}
}
// System.Void Inventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory__ctor_mF2ACBF005FF40F23F68AE8E9E416A4870EC4B27C (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	{
		Container__ctor_mBF26C4943BFA50AA0839951E3004F955E2E729CA(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InventorySlot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_Update_m55EF943FDF03F1223407CA63E1612B381A9D09A7 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(GetComponent<Item>() is BuildingBlock)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0;
		L_0 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		if (!((BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 *)IsInstClass((RuntimeObject*)L_0, BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		// textObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_textObject_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// UpdateText();
		InventorySlot_UpdateText_mB0ABF69551102BA4F57CA78F004FA389BEBAE56A(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0020:
	{
		// textObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_textObject_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InventorySlot::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_UpdateText_mB0ABF69551102BA4F57CA78F004FA389BEBAE56A (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_1 = NULL;
	{
		// if (GetComponent<BuildingBlock>().quantity != 0)
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_0;
		L_0 = Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463(__this, /*hidden argument*/Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463_RuntimeMethod_var);
		int32_t L_1 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_0)->get_quantity_9();
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// textObject.GetComponent<Text>().text = GetComponent<BuildingBlock>().quantity + "";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_textObject_7();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_2, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		BuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568 * L_4;
		L_4 = Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463(__this, /*hidden argument*/Component_GetComponent_TisBuildingBlock_t6CFFD31079E6696181DA75C1FE0E2E3D1293F568_m5ADA9BCF7E71A30D659560D991348F3A9EDC9463_RuntimeMethod_var);
		int32_t* L_5 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_4)->get_address_of_quantity_9();
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_5, /*hidden argument*/NULL);
		String_t* L_7 = L_6;
		G_B2_0 = L_7;
		G_B2_1 = L_3;
		if (L_7)
		{
			G_B3_0 = L_7;
			G_B3_1 = L_3;
			goto IL_0031;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B2_1;
	}

IL_0031:
	{
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		return;
	}

IL_0037:
	{
		// textObject.GetComponent<Text>().text = "";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_textObject_7();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9;
		L_9 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_8, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// sr.sprite = null;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_10 = __this->get_sr_4();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_10, (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)NULL, /*hidden argument*/NULL);
		// Destroy(GetComponent<Item>());
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_11;
		L_11 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InventorySlot::addItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_addItem_m2FB504FE9090A8C7896EDF7D235C500AB3D9C007 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Item>().quantity += item.quantity;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0;
		L_0 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = L_0;
		int32_t L_2 = L_1->get_quantity_9();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_3 = ___item0;
		int32_t L_4 = L_3->get_quantity_9();
		L_1->set_quantity_9(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_4)));
		// }
		return;
	}
}
// System.Void InventorySlot::InsertItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_InsertItem_m987690247A7F0F457BA3F11F46E1F99E85DCD6E4 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_0 = NULL;
	int32_t V_1 = 0;
	FieldInfo_t * V_2 = NULL;
	{
		// sr.sprite = item.sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = __this->get_sr_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = ___item0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = L_1->get_sprite_4();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_0, L_2, /*hidden argument*/NULL);
		// if (gameObject.GetComponent<Item>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_4;
		L_4 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_3, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		// gameObject.AddComponent(item.GetType());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_7 = ___item0;
		Type_t * L_8;
		L_8 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_7, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_9;
		L_9 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_6, L_8, /*hidden argument*/NULL);
		// System.Reflection.FieldInfo[] fields = item.GetType().GetFields();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_10 = ___item0;
		Type_t * L_11;
		L_11 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_10, /*hidden argument*/NULL);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_12;
		L_12 = Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372(L_11, /*hidden argument*/NULL);
		// foreach (System.Reflection.FieldInfo field in fields)
		V_0 = L_12;
		V_1 = 0;
		goto IL_006c;
	}

IL_0046:
	{
		// foreach (System.Reflection.FieldInfo field in fields)
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		FieldInfo_t * L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		// field.SetValue(gameObject.GetComponent(item.GetType()), field.GetValue(item));
		FieldInfo_t * L_17 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_19 = ___item0;
		Type_t * L_20;
		L_20 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_19, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_21;
		L_21 = GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473(L_18, L_20, /*hidden argument*/NULL);
		FieldInfo_t * L_22 = V_2;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_23 = ___item0;
		RuntimeObject * L_24;
		L_24 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_22, L_23);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_17, L_21, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_006c:
	{
		// foreach (System.Reflection.FieldInfo field in fields)
		int32_t L_26 = V_1;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_0046;
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void InventorySlot::PushItemToPointer(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_PushItemToPointer_m5C2DBE8FCD8CDE22811636A3EAF125ABF56FDC00 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_0 = NULL;
	int32_t V_1 = 0;
	FieldInfo_t * V_2 = NULL;
	{
		// if (inventory.gameObject.GetComponent<Item>() == null)
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = __this->get_inventory_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_2;
		L_2 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_1, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		// inventory.gameObject.AddComponent(item.GetType());
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_4 = __this->get_inventory_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_6 = ___item0;
		Type_t * L_7;
		L_7 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_6, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_8;
		L_8 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_5, L_7, /*hidden argument*/NULL);
		// System.Reflection.FieldInfo[] fields = item.GetType().GetFields();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_9 = ___item0;
		Type_t * L_10;
		L_10 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_9, /*hidden argument*/NULL);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_11;
		L_11 = Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372(L_10, /*hidden argument*/NULL);
		// foreach (System.Reflection.FieldInfo field in fields)
		V_0 = L_11;
		V_1 = 0;
		goto IL_006a;
	}

IL_003f:
	{
		// foreach (System.Reflection.FieldInfo field in fields)
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_12 = V_0;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		FieldInfo_t * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		// field.SetValue(inventory.gameObject.GetComponent(item.GetType()), field.GetValue(item));
		FieldInfo_t * L_16 = V_2;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_17 = __this->get_inventory_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_19 = ___item0;
		Type_t * L_20;
		L_20 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_19, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_21;
		L_21 = GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473(L_18, L_20, /*hidden argument*/NULL);
		FieldInfo_t * L_22 = V_2;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_23 = ___item0;
		RuntimeObject * L_24;
		L_24 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_22, L_23);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_16, L_21, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_006a:
	{
		// foreach (System.Reflection.FieldInfo field in fields)
		int32_t L_26 = V_1;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_003f;
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator InventorySlot::SwapItems(Item,Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InventorySlot_SwapItems_mC44E028BC4B3D45443D68BF834ED2B08182D1616 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item10, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * L_0 = (U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A *)il2cpp_codegen_object_new(U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A_il2cpp_TypeInfo_var);
		U3CSwapItemsU3Ed__10__ctor_m52F4910F04CE1C4AE60D51A3969A32492E4525C3(L_0, 0, /*hidden argument*/NULL);
		U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * L_2 = L_1;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_3 = ___item10;
		L_2->set_item1_3(L_3);
		U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * L_4 = L_2;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5 = ___item21;
		L_4->set_item2_4(L_5);
		return L_4;
	}
}
// Item InventorySlot::RemoveItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * InventorySlot_RemoveItem_mCD31177264C75C37B2E69F6BD40B8C4FDA063051 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * G_B2_0 = NULL;
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * G_B1_0 = NULL;
	{
		// Item x = containedItem;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0 = __this->get_containedItem_5();
		// if (gameObject.GetComponent<Item>() != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_2;
		L_2 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_1, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (!L_3)
		{
			G_B2_0 = L_0;
			goto IL_0024;
		}
	}
	{
		// Destroy(GetComponent<Item>());
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_4;
		L_4 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_0024:
	{
		// sr.sprite = null;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = __this->get_sr_4();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_5, (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)NULL, /*hidden argument*/NULL);
		// return x;
		return G_B2_0;
	}
}
// System.Void InventorySlot::onPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_onPress_m354AE5463EBABD100730AD9568BC4ABAD610AB55 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inventory.GetComponent<Item>() == null && GetComponent<Item>() != null)
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = __this->get_inventory_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1;
		L_1 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_0, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0045;
		}
	}
	{
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_3;
		L_3 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// PushItemToPointer(GetComponent<Item>());
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5;
		L_5 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		InventorySlot_PushItemToPointer_m5C2DBE8FCD8CDE22811636A3EAF125ABF56FDC00(__this, L_5, /*hidden argument*/NULL);
		// Destroy(GetComponent<Item>());
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_6;
		L_6 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// sr.sprite = null;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_sr_4();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_7, (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0045:
	{
		// else if (inventory.GetComponent<Item>() != null && GetComponent<Item>() == null)
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_8 = __this->get_inventory_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_9;
		L_9 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_8, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00b4;
		}
	}
	{
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_11;
		L_11 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00b4;
		}
	}
	{
		// InsertItem(inventory.GetComponent<Item>());
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_13 = __this->get_inventory_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_14;
		L_14 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_13, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		InventorySlot_InsertItem_m987690247A7F0F457BA3F11F46E1F99E85DCD6E4(__this, L_14, /*hidden argument*/NULL);
		// Destroy(inventory.GetComponent<Item>());
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_15 = __this->get_inventory_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_16;
		L_16 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_15, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
		// sr.sprite = GetComponent<Item>().sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_17 = __this->get_sr_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_18;
		L_18 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_19 = L_18->get_sprite_4();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_17, L_19, /*hidden argument*/NULL);
		// inventory.mouseObject.GetComponent<SpriteRenderer>().sprite = null;
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_20 = __this->get_inventory_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_mouseObject_11();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_22;
		L_22 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_21, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_22, (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b4:
	{
		// else if(inventory.GetComponent<Item>() != null && GetComponent<Item>() != null)
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_23 = __this->get_inventory_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_24;
		L_24 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_23, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0109;
		}
	}
	{
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_26;
		L_26 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0109;
		}
	}
	{
		// StartCoroutine(SwapItems(GetComponent<Item>(), inventory.GetComponent<Item>()));
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_28;
		L_28 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_29 = __this->get_inventory_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_30;
		L_30 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_29, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		RuntimeObject* L_31;
		L_31 = InventorySlot_SwapItems_mC44E028BC4B3D45443D68BF834ED2B08182D1616(__this, L_28, L_30, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_32;
		L_32 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_31, /*hidden argument*/NULL);
		// sr.sprite = GetComponent<Item>().sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_33 = __this->get_sr_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_34;
		L_34 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(__this, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_35 = L_34->get_sprite_4();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_33, L_35, /*hidden argument*/NULL);
	}

IL_0109:
	{
		// }
		return;
	}
}
// System.Void InventorySlot::ShiftScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot_ShiftScale_m00876E41DDAF245A779B74CAD9F7337EC5C7B50A (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newSize0, const RuntimeMethod* method)
{
	{
		// StartCoroutine(SizeShift(newSize));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___newSize0;
		RuntimeObject* L_1;
		L_1 = InventorySlot_SizeShift_mB7E04D68EE4108A6C55822BE80116D9AD54B3FEE(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator InventorySlot::SizeShift(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InventorySlot_SizeShift_mB7E04D68EE4108A6C55822BE80116D9AD54B3FEE (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___newSize0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * L_0 = (U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B *)il2cpp_codegen_object_new(U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B_il2cpp_TypeInfo_var);
		U3CSizeShiftU3Ed__14__ctor_m6B9DE24809AA4CF95224828393CA485D822BAFAD(L_0, 0, /*hidden argument*/NULL);
		U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * L_2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___newSize0;
		L_2->set_newSize_3(L_3);
		return L_2;
	}
}
// System.Void InventorySlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InventorySlot__ctor_m62F1FA815F99E2E9F5586382BCCAED76385C4C92 (InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Item::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Update_m7DD7C5E85DF955AEBCC83831D9C69BD9490F2F41 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Item::PlayerCollect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Item_PlayerCollect_mC6CDB19CC79115B9B61587ED92B10AE5C4F1A055 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 * L_0 = (U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 *)il2cpp_codegen_object_new(U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791_il2cpp_TypeInfo_var);
		U3CPlayerCollectU3Ed__7__ctor_mB683E6ADA3D9EE036409141C068C35ACE0634528(L_0, 0, /*hidden argument*/NULL);
		U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Item::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_OnTriggerEnter2D_m018EFDDA7DA33E9F8359C544BB7BDF56AED9FB84 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// isTouchingPlayer = true;
		__this->set_isTouchingPlayer_6((bool)1);
		// player = collision.GetComponent<Player>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4;
		L_4 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_3, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		__this->set_player_7(L_4);
		// StartCoroutine(PlayerCollect());
		RuntimeObject* L_5;
		L_5 = Item_PlayerCollect_mC6CDB19CC79115B9B61587ED92B10AE5C4F1A055(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Item::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_OnTriggerExit2D_m0AACCE2B1A6FEB1DF4593A0FF382D677D7561549 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Player")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// isTouchingPlayer = false;
		__this->set_isTouchingPlayer_6((bool)0);
		// player = null;
		__this->set_player_7((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F *)NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Item::CoolItemEffectStuffz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Item_CoolItemEffectStuffz_m203C2F95CC5C8A9070F91BF19DC053C5E9D6B4DF (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 * L_0 = (U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 *)il2cpp_codegen_object_new(U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269_il2cpp_TypeInfo_var);
		U3CCoolItemEffectStuffzU3Ed__10__ctor_m87978DE65E11C1681256B7B1472BD13E400BE8BE(L_0, 0, /*hidden argument*/NULL);
		U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemIDList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemIDList__ctor_mE7FA7DE1D5C4B7AF1E3E2ACB6BFC11722EDA68BB (ItemIDList_tD2A9FB64FDC1155CAC876F93F6768EF2819C1382 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemMover::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemMover_Start_m3F1568B4F1B6B2AF64600334EFA6C01FF633DF08 (ItemMover_t1737619556BD4ADE440A28F9827FC6480E43981A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ItemMover::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemMover_Update_mE2D8A22A6FB7B3B1870F078B3ED03EAAA84281CD (ItemMover_t1737619556BD4ADE440A28F9827FC6480E43981A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ItemMover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemMover__ctor_m165E84798F4778F8E124155F6853AEBE7261F317 (ItemMover_t1737619556BD4ADE440A28F9827FC6480E43981A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemObjectCoolEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemObjectCoolEffect_Start_mC1D811DBBC5C2F46DDA7E73753FEA1160E82AB16 (ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(CoolItemEffectStuffz());
		RuntimeObject* L_0;
		L_0 = ItemObjectCoolEffect_CoolItemEffectStuffz_m3AAE87D6A07E9663883D9758BF9DE29095C99423(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ItemObjectCoolEffect::CoolItemEffectStuffz()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ItemObjectCoolEffect_CoolItemEffectStuffz_m3AAE87D6A07E9663883D9758BF9DE29095C99423 (ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 * L_0 = (U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 *)il2cpp_codegen_object_new(U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1_il2cpp_TypeInfo_var);
		U3CCoolItemEffectStuffzU3Ed__1__ctor_m1DF1E76C2F1162271EE3AB972C8F4405BE8870EE(L_0, 0, /*hidden argument*/NULL);
		U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ItemObjectCoolEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemObjectCoolEffect__ctor_mF27475C346B3C72200E83F0627A98E3ABF3D777B (ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MeleeWeapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeleeWeapon__ctor_mABBAB7E90A6D26201CA9724BA3DEA14247874DF0 (MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * __this, const RuntimeMethod* method)
{
	{
		Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MousePointer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MousePointer_Start_m8409F243EC0F2D4B18D467202604D0AA4BD3C78C (MousePointer_tC2F2FBAC4C4EF4C03E86ED58A0CB2486AA2FF97A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_sr_6(L_0);
		// }
		return;
	}
}
// System.Void MousePointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MousePointer_Update_m135E11F7066A9EC5FF06DF107033C430BEB06B6B (MousePointer_tC2F2FBAC4C4EF4C03E86ED58A0CB2486AA2FF97A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (inventory.GetComponent<Item>() != null)
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = __this->get_inventory_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1;
		L_1 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_0, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0074;
		}
	}
	{
		// mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_3, L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		__this->set_mousePos_5(L_6);
		// transform.position = new Vector3(mousePos.x, mousePos.y, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_mousePos_5();
		float L_9 = L_8->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_10 = __this->get_address_of_mousePos_5();
		float L_11 = L_10->get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_9, L_11, (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_12, /*hidden argument*/NULL);
		// sr.sprite = inventory.GetComponent<Item>().sprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_13 = __this->get_sr_6();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_14 = __this->get_inventory_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_15;
		L_15 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_14, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_16 = L_15->get_sprite_4();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_13, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// sr.sprite = null;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_17 = __this->get_sr_6();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_17, (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MousePointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MousePointer__ctor_mA20A16F0C88D1D24ABEDC2B8D66885F821CE4BF6 (MousePointer_tC2F2FBAC4C4EF4C03E86ED58A0CB2486AA2FF97A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NPC::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPC_Start_m20C2D17950CB234A91905C91CCEADA0870B913B9 (NPC_tC1B80DAFC03710A57E14A5AA80EED2CD89A35AE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5_m877A6356616DCD3017D3B78434148723B8152C7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_14(L_0);
		// td = GetComponent<TempDialogue>();
		TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * L_1;
		L_1 = Component_GetComponent_TisTempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5_m877A6356616DCD3017D3B78434148723B8152C7D(__this, /*hidden argument*/Component_GetComponent_TisTempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5_m877A6356616DCD3017D3B78434148723B8152C7D_RuntimeMethod_var);
		__this->set_td_15(L_1);
		// }
		return;
	}
}
// System.Void NPC::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPC_FixedUpdate_mC4F9FFB1FAE5068B9E3C89D101F9CF3DB2790E50 (NPC_tC1B80DAFC03710A57E14A5AA80EED2CD89A35AE6 * __this, const RuntimeMethod* method)
{
	{
		// rb.velocity = new Vector2(recoil.x, recoil.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_address_of_recoil_11();
		float L_2 = L_1->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_address_of_recoil_11();
		float L_4 = L_3->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), L_2, L_4, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_5, /*hidden argument*/NULL);
		// SoftenRecoil();
		Entity_SoftenRecoil_m20AA0962D687C84D084412B8D29C44DF9E50B9E2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NPC::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPC_TakeDamage_mD7F5765836E5B254BD26A648644A25FC9B85A36B (NPC_tC1B80DAFC03710A57E14A5AA80EED2CD89A35AE6 * __this, float ___dam0, const RuntimeMethod* method)
{
	{
		// td.Hurt();
		TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * L_0 = __this->get_td_15();
		TempDialogue_Hurt_mB762E23BA84EDE4033D6EE1313F711EA6831A2B4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NPC::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPC__ctor_mC9AA4F3CBCBADCB1866559D68B31E231A879CACE (NPC_tC1B80DAFC03710A57E14A5AA80EED2CD89A35AE6 * __this, const RuntimeMethod* method)
{
	{
		Entity__ctor_mA22D51D64B97E8F6F879E72C8E0DE7D26ED0C824(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PauseMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Start_mB3762C9E5B204FDE0381A6409728D7DCAD7E6C37 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// isPaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)0);
		// }
		return;
	}
}
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m191CABDC11442A2CC104FC8B3244D04826E7BD57 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_mDE9D56FE11715566D4D54FD96F8E1EF9734D225F(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// if (!isPaused)
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		bool L_1 = ((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->get_isPaused_4();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Pause();
		PauseMenu_Pause_m395165A04A026E9974327328181ACFA512DD76C7(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0017:
	{
		// Resume();
		PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717(__this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Pause_m395165A04A026E9974327328181ACFA512DD76C7 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// pauseUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseUI_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// isPaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)1);
		// }
		return;
	}
}
// System.Void PauseMenu::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Resume_m256AFDD68DF9851B6D716189F709ED93D45C3717 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// pauseUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseUI_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// isPaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)0);
		// }
		return;
	}
}
// System.Void PauseMenu::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_SaveGame_mFB806ADF96679D77B079E02FFEFB905E7DE790FA (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PauseMenu::DeathScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_DeathScreen_m6949C40F992F4FB2BCF9BFD5FAAECEAC9630D73B (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isPaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)1);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// deathUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_deathUI_8();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::QuitToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_QuitToMenu_m9D71C56F3F984BBC1E18C0BCF323B753860C0FD6 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_QuitGame_mCBF05F6F0F10803D2D567060A695D526BFB25533 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_StartGame_mB4E5CE66D982688D9F91B883E4B85D92BF216D20 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// isPaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)0);
		// SceneManager.LoadScene("Game");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_mA1A281F3359C234E5CF24FFEAC20C12C48D69018 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__cctor_m6819B2CD3B03CB44F1D7914C847058A7C1B7D924 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isPaused = false;
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_isPaused_4((bool)0);
		// public static bool soundOn = true;
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_soundOn_5((bool)1);
		// public static bool musicOn = true;
		((PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_il2cpp_TypeInfo_var))->set_musicOn_6((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AS = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_AS_19(L_0);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// healthBarMask.transform.localPosition = new Vector3(((health/maxHealth)*17f)-17f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_healthBarMask_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		float L_2 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_health_4();
		float L_3 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_maxHealth_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_2/(float)L_3)), (float)(17.0f))), (float)(17.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_1, L_4, /*hidden argument*/NULL);
		// if (health < 0)
		float L_5 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_health_4();
		if ((!(((float)L_5) < ((float)(0.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// PM.DeathScreen();
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_6 = __this->get_PM_17();
		PauseMenu_DeathScreen_m6949C40F992F4FB2BCF9BFD5FAAECEAC9630D73B(L_6, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::StartEndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_StartEndGame_m08E700DE311531B62F06EAA20A6F2403E39FCC02 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 * L_0 = (U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 *)il2cpp_codegen_object_new(U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117_il2cpp_TypeInfo_var);
		U3CStartEndGameU3Ed__10__ctor_m5FD5D1F6F448DA1D4E3FB790CDCD7B11BE55737B(L_0, 0, /*hidden argument*/NULL);
		U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Player::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_TakeDamage_m444BE81C7D316FF16FD7DFBE1D5952DCD4E4176C (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, float ___dam0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(SoundMaster.soundOn)
		bool L_0 = ((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->get_soundOn_4();
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// AS.PlayOneShot(hitsound[Random.Range(0, hitsound.Length)]);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_AS_19();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_2 = __this->get_hitsound_20();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_3 = __this->get_hitsound_20();
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_6, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// health = health - (dam / armor);
		float L_7 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_health_4();
		float L_8 = ___dam0;
		float L_9 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->get_armor_9();
		((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)__this)->set_health_4(((float)il2cpp_codegen_subtract((float)L_7, (float)((float)((float)L_8/(float)L_9)))));
		// if(regen!=null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10 = __this->get_regen_15();
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		// StopCoroutine(regen);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11 = __this->get_regen_15();
		MonoBehaviour_StopCoroutine_m5FF0476C9886FD8A3E6BA82BBE34B896CA279413(__this, L_11, /*hidden argument*/NULL);
	}

IL_0050:
	{
		// regen = StartCoroutine(RegenerateHealth());
		RuntimeObject* L_12;
		L_12 = Player_RegenerateHealth_m054F871EBA4A13E61BE78D466CBE82D8F38CD47D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_13;
		L_13 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_12, /*hidden argument*/NULL);
		__this->set_regen_15(L_13);
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::RegenerateHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_RegenerateHealth_m054F871EBA4A13E61BE78D466CBE82D8F38CD47D (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 * L_0 = (U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 *)il2cpp_codegen_object_new(U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7_il2cpp_TypeInfo_var);
		U3CRegenerateHealthU3Ed__12__ctor_m03ADDC4E6B0C96BCB18CCDAAF82F39762A6C01E6(L_0, 0, /*hidden argument*/NULL);
		U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean Player::CollectItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_CollectItem_m4674973FA78A10981C3CB392360C44E4F79ED839 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	{
		// return inventory.insertItem(item);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = __this->get_inventory_16();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = ___item0;
		bool L_2;
		L_2 = Container_insertItem_mF0BD53A89B1E62A60886453EFFE1F01C306EEA2A(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		Entity__ctor_mA22D51D64B97E8F6F879E72C8E0DE7D26ED0C824(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggled = false;
		__this->set_toggled_15((bool)0);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_14(L_1);
		// entity = GetComponent<Player>();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2;
		L_2 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(__this, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		__this->set_entity_13(L_2);
		// playerSpeed = entity.speed;
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_3 = __this->get_entity_13();
		int32_t L_4 = L_3->get_speed_6();
		__this->set_playerSpeed_5(((float)((float)L_4)));
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Q))
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)113), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// toggleInventory();
		PlayerMovement_toggleInventory_mAB58AE26DC19F3A01B6E69A5FB6CCC5EEE2D1B08(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::toggleInventory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_toggleInventory_mAB58AE26DC19F3A01B6E69A5FB6CCC5EEE2D1B08 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// if (toggled)
		bool L_0 = __this->get_toggled_15();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// toggled = false;
		__this->set_toggled_15((bool)0);
		// inventory.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_inventory_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// toggled = true;
		__this->set_toggled_15((bool)1);
		// inventory.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_inventory_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FixedUpdate_m774280268A537B6ED9D9171CEAE67E9A0C3A9499 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// entity.sortLayers();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_0 = __this->get_entity_13();
		Entity_sortLayers_m02B956D45A90E31A235A934BB100105FF213958E(L_0, /*hidden argument*/NULL);
		// entity.SoftenRecoil();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_1 = __this->get_entity_13();
		Entity_SoftenRecoil_m20AA0962D687C84D084412B8D29C44DF9E50B9E2(L_1, /*hidden argument*/NULL);
		// mag = Mathf.Sqrt(Mathf.Pow(Input.GetAxis("Horizontal"), 2) + Mathf.Pow(Input.GetAxis("Vertical"), 2));
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_3;
		L_3 = powf(L_2, (2.0f));
		float L_4;
		L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		float L_5;
		L_5 = powf(L_4, (2.0f));
		float L_6;
		L_6 = sqrtf(((float)il2cpp_codegen_add((float)L_3, (float)L_5)));
		__this->set_mag_7(L_6);
		// angle = Mathf.Atan2(Input.GetAxis("Vertical"), Input.GetAxis("Horizontal"));
		float L_7;
		L_7 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		float L_8;
		L_8 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_9;
		L_9 = atan2f(L_7, L_8);
		__this->set_angle_6(L_9);
		// rb.velocity = new Vector2((mag * playerSpeed * Mathf.Cos(angle)) + entity.recoil.x, (mag * playerSpeed * Mathf.Sin(angle)) + entity.recoil.y) ;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_10 = __this->get_rb_4();
		float L_11 = __this->get_mag_7();
		float L_12 = __this->get_playerSpeed_5();
		float L_13 = __this->get_angle_6();
		float L_14;
		L_14 = cosf(L_13);
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_15 = __this->get_entity_13();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = L_15->get_address_of_recoil_11();
		float L_17 = L_16->get_x_0();
		float L_18 = __this->get_mag_7();
		float L_19 = __this->get_playerSpeed_5();
		float L_20 = __this->get_angle_6();
		float L_21;
		L_21 = sinf(L_20);
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_22 = __this->get_entity_13();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = L_22->get_address_of_recoil_11();
		float L_24 = L_23->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_25), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), (float)L_14)), (float)L_17)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)), (float)L_21)), (float)L_24)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_10, L_25, /*hidden argument*/NULL);
		// if (rb.velocity.x > playerSpeed / 2)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_26 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		L_27 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_0();
		float L_29 = __this->get_playerSpeed_5();
		if ((!(((float)L_28) > ((float)((float)((float)L_29/(float)(2.0f)))))))
		{
			goto IL_00f4;
		}
	}
	{
		// orientation = 1;
		__this->set_orientation_8(1);
		// } else if (rb.velocity.x < -playerSpeed / 2)
		goto IL_0169;
	}

IL_00f4:
	{
		// } else if (rb.velocity.x < -playerSpeed / 2)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_30 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_0();
		float L_33 = __this->get_playerSpeed_5();
		if ((!(((float)L_32) < ((float)((float)((float)((-L_33))/(float)(2.0f)))))))
		{
			goto IL_011c;
		}
	}
	{
		// orientation = 3;
		__this->set_orientation_8(3);
		// }
		goto IL_0169;
	}

IL_011c:
	{
		// else if (rb.velocity.y > playerSpeed / 2)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_34 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		L_35 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_y_1();
		float L_37 = __this->get_playerSpeed_5();
		if ((!(((float)L_36) > ((float)((float)((float)L_37/(float)(2.0f)))))))
		{
			goto IL_0143;
		}
	}
	{
		// orientation = 4;
		__this->set_orientation_8(4);
		// }
		goto IL_0169;
	}

IL_0143:
	{
		// else if (rb.velocity.y < -playerSpeed / 2)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_38 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_y_1();
		float L_41 = __this->get_playerSpeed_5();
		if ((!(((float)L_40) < ((float)((float)((float)((-L_41))/(float)(2.0f)))))))
		{
			goto IL_0169;
		}
	}
	{
		// orientation = 2;
		__this->set_orientation_8(2);
	}

IL_0169:
	{
		// if (Mathf.Abs(rb.velocity.x) > .25f || Mathf.Abs(rb.velocity.y) > .25f)
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_42 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43;
		L_43 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_x_0();
		float L_45;
		L_45 = fabsf(L_44);
		if ((((float)L_45) > ((float)(0.25f))))
		{
			goto IL_01a1;
		}
	}
	{
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_46 = __this->get_rb_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47;
		L_47 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_y_1();
		float L_49;
		L_49 = fabsf(L_48);
		if ((!(((float)L_49) > ((float)(0.25f)))))
		{
			goto IL_01aa;
		}
	}

IL_01a1:
	{
		// moving = true;
		__this->set_moving_10((bool)1);
		goto IL_01b1;
	}

IL_01aa:
	{
		// moving = false;
		__this->set_moving_10((bool)0);
	}

IL_01b1:
	{
		// if (moving != wasMoving || orientation != lastOrientation)
		bool L_50 = __this->get_moving_10();
		bool L_51 = __this->get_wasMoving_11();
		if ((!(((uint32_t)L_50) == ((uint32_t)L_51))))
		{
			goto IL_01cd;
		}
	}
	{
		int32_t L_52 = __this->get_orientation_8();
		int32_t L_53 = __this->get_lastOrientation_9();
		if ((((int32_t)L_52) == ((int32_t)L_53)))
		{
			goto IL_01eb;
		}
	}

IL_01cd:
	{
		// wasMoving = moving;
		bool L_54 = __this->get_moving_10();
		__this->set_wasMoving_11(L_54);
		// lastOrientation = orientation;
		int32_t L_55 = __this->get_orientation_8();
		__this->set_lastOrientation_9(L_55);
		// SetAnim();
		PlayerMovement_SetAnim_m2085D138147C4FDA65129AB465EADDB595F45528(__this, /*hidden argument*/NULL);
	}

IL_01eb:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::SetAnim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_SetAnim_m2085D138147C4FDA65129AB465EADDB595F45528 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FA5E6C30F23EA419AEE3F603DE46AB409794340);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D4CE176306E55510007292A41816F18D1FA1DAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral932ABDD0FAE09741F960D9DF0F89DCC071D0C464);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4FD08C4B600C28BACC3E6CD9C3BDE799E46F78F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (moving)
		bool L_0 = __this->get_moving_10();
		if (!L_0)
		{
			goto IL_0070;
		}
	}
	{
		// if (orientation == 1)
		int32_t L_1 = __this->get_orientation_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		// anim.Play("Right");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_anim_14();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_2, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, /*hidden argument*/NULL);
		return;
	}

IL_0022:
	{
		// else if (orientation == 2)
		int32_t L_3 = __this->get_orientation_8();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_003c;
		}
	}
	{
		// anim.Play("Down");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_anim_14();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_4, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, /*hidden argument*/NULL);
		return;
	}

IL_003c:
	{
		// else if (orientation == 3)
		int32_t L_5 = __this->get_orientation_8();
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_0056;
		}
	}
	{
		// anim.Play("Left");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_anim_14();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_6, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, /*hidden argument*/NULL);
		return;
	}

IL_0056:
	{
		// else if (orientation == 4)
		int32_t L_7 = __this->get_orientation_8();
		if ((!(((uint32_t)L_7) == ((uint32_t)4))))
		{
			goto IL_00d7;
		}
	}
	{
		// anim.Play("Up");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_anim_14();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_8, _stringLiteral9D354CA1036DDA6F701F800C5C1B3A4235D2EDD7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0070:
	{
		// if (orientation == 1)
		int32_t L_9 = __this->get_orientation_8();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		// anim.Play("StopRight");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = __this->get_anim_14();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_10, _stringLiteral5D4CE176306E55510007292A41816F18D1FA1DAF, /*hidden argument*/NULL);
		return;
	}

IL_008a:
	{
		// else if (orientation == 2)
		int32_t L_11 = __this->get_orientation_8();
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_00a4;
		}
	}
	{
		// anim.Play("StopDown");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_anim_14();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_12, _stringLiteral932ABDD0FAE09741F960D9DF0F89DCC071D0C464, /*hidden argument*/NULL);
		return;
	}

IL_00a4:
	{
		// else if (orientation == 3)
		int32_t L_13 = __this->get_orientation_8();
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_00be;
		}
	}
	{
		// anim.Play("StopLeft");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = __this->get_anim_14();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_14, _stringLiteralC4FD08C4B600C28BACC3E6CD9C3BDE799E46F78F, /*hidden argument*/NULL);
		return;
	}

IL_00be:
	{
		// else if (orientation == 4)
		int32_t L_15 = __this->get_orientation_8();
		if ((!(((uint32_t)L_15) == ((uint32_t)4))))
		{
			goto IL_00d7;
		}
	}
	{
		// anim.Play("StopUp");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_16 = __this->get_anim_14();
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_16, _stringLiteral3FA5E6C30F23EA419AEE3F603DE46AB409794340, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundMaster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMaster_Start_m89C30D5330CA0859DE34CAEC1C8524B6CB06A32D (SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundOn = true;
		((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->set_soundOn_4((bool)1);
		// musicOn = true;
		__this->set_musicOn_5((bool)1);
		// AS = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_AS_6(L_0);
		// }
		return;
	}
}
// System.Void SoundMaster::ToggleMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMaster_ToggleMusic_mE5B84750932D37D838D047CDFDEE79F57CB80433 (SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B25FEF8B32016F13514A0970D493D2BCE6B8DF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (musicOn)
		bool L_0 = __this->get_musicOn_5();
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// musicOn = false;
		__this->set_musicOn_5((bool)0);
		// musicText.text = "off";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_musicText_10();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral1B25FEF8B32016F13514A0970D493D2BCE6B8DF7);
		// }
		return;
	}

IL_0020:
	{
		// musicOn = true;
		__this->set_musicOn_5((bool)1);
		// musicText.text = "on";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_musicText_10();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44);
		// }
		return;
	}
}
// System.Void SoundMaster::ToggleSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMaster_ToggleSound_m1ACFB9C2C6BF9646BE31A297F289C2ABFE836DFC (SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B25FEF8B32016F13514A0970D493D2BCE6B8DF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (soundOn)
		bool L_0 = ((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->get_soundOn_4();
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// soundOn = false;
		((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->set_soundOn_4((bool)0);
		// soundText.text = "off";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_soundText_9();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral1B25FEF8B32016F13514A0970D493D2BCE6B8DF7);
		// }
		return;
	}

IL_001e:
	{
		// soundOn = true;
		((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->set_soundOn_4((bool)1);
		// soundText.text = "on";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_soundText_9();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral6F531D091DEFD1AFE9482485551BED2FDAAA1A44);
		// }
		return;
	}
}
// System.Void SoundMaster::PlaySound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMaster_PlaySound_m643DBD13FBFB6D131816B74DD477BAAA799F1835 (SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (soundOn)
		bool L_0 = ((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->get_soundOn_4();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// AS.PlayOneShot(x);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_AS_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = ___x0;
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void SoundMaster::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMaster_Update_mA5D56903696450F12C18ADC96E5194A3FB04FC22 (SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * __this, const RuntimeMethod* method)
{
	{
		// if (musicOn)
		bool L_0 = __this->get_musicOn_5();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// AS.volume = musicVolume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = __this->get_AS_6();
		float L_2 = __this->get_musicVolume_7();
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// AS.volume = 0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_AS_6();
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_3, (0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundMaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundMaster__ctor_m33EC34520EB6C008F9FF107A058CD0931FE11B82 (SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TempDialogue::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempDialogue_Start_mCFAE7801A4BE7BB8BE219572E387DBF00BA8C384 (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, const RuntimeMethod* method)
{
	{
		// c = StartCoroutine(DialogueLoop(greetingDialogue));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_greetingDialogue_4();
		RuntimeObject* L_1;
		L_1 = TempDialogue_DialogueLoop_mCAC95117D6DB9A3EA5680C905A87FF86A5B4D8DE(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		__this->set_c_12(L_2);
		// introComplete = false;
		__this->set_introComplete_13((bool)0);
		// }
		return;
	}
}
// System.Void TempDialogue::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempDialogue_Update_m9577F70B539C41C71A8DD2E33B0DB9CBE4916322 (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator TempDialogue::DialogueLoop(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TempDialogue_DialogueLoop_mCAC95117D6DB9A3EA5680C905A87FF86A5B4D8DE (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dialogue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * L_0 = (U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 *)il2cpp_codegen_object_new(U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1_il2cpp_TypeInfo_var);
		U3CDialogueLoopU3Ed__12__ctor_mAB3DB36850E10AD69F83D3CB00ACA111E56D9932(L_0, 0, /*hidden argument*/NULL);
		U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * L_1 = L_0;
		L_1->set_U3CU3E4__this_3(__this);
		U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * L_2 = L_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___dialogue0;
		L_2->set_dialogue_2(L_3);
		return L_2;
	}
}
// System.Void TempDialogue::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempDialogue_OnTriggerEnter2D_m988DC6DEF6BBBBEB58903156F4F60980AC458D3A (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (introComplete&&collision.gameObject.tag == "Player")
		bool L_0 = __this->get_introComplete_13();
		if (!L_0)
		{
			goto IL_0052;
		}
	}
	{
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_1 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		// if (CheckIfGameBeat())
		bool L_5;
		L_5 = TempDialogue_CheckIfGameBeat_mB0D860F1E49737AC2B3ECDB3199F913781CCE7BF(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// PlugDialogue(victoryDialogue);
		String_t* L_6 = __this->get_victoryDialogue_6();
		TempDialogue_PlugDialogue_mBE17240C7B4D319F9E2504E90F0F676C5D564260(__this, L_6, /*hidden argument*/NULL);
		// StartCoroutine(player.StartEndGame());
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_7 = __this->get_player_11();
		RuntimeObject* L_8;
		L_8 = Player_StartEndGame_m08E700DE311531B62F06EAA20A6F2403E39FCC02(L_7, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_9;
		L_9 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0046:
	{
		// PlugDialogue(failureDialogue);
		String_t* L_10 = __this->get_failureDialogue_7();
		TempDialogue_PlugDialogue_mBE17240C7B4D319F9E2504E90F0F676C5D564260(__this, L_10, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Boolean TempDialogue::CheckIfGameBeat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TempDialogue_CheckIfGameBeat_mB0D860F1E49737AC2B3ECDB3199F913781CCE7BF (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, const RuntimeMethod* method)
{
	{
		// if (inventory.CheckIfContainsID(2) && inventory.CheckIfContainsID(4) && inventory.CheckIfContainsID(5) && inventory.CheckIfContainsID(6) && inventory.CheckIfContainsID(7) && inventory.CheckIfContainsID(8))
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = __this->get_inventory_10();
		bool L_1;
		L_1 = Container_CheckIfContainsID_mB5DE7DCEFAE5B0C4D85178829287D072B628FF87(L_0, 2, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_2 = __this->get_inventory_10();
		bool L_3;
		L_3 = Container_CheckIfContainsID_mB5DE7DCEFAE5B0C4D85178829287D072B628FF87(L_2, 4, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_4 = __this->get_inventory_10();
		bool L_5;
		L_5 = Container_CheckIfContainsID_mB5DE7DCEFAE5B0C4D85178829287D072B628FF87(L_4, 5, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_6 = __this->get_inventory_10();
		bool L_7;
		L_7 = Container_CheckIfContainsID_mB5DE7DCEFAE5B0C4D85178829287D072B628FF87(L_6, 6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_8 = __this->get_inventory_10();
		bool L_9;
		L_9 = Container_CheckIfContainsID_mB5DE7DCEFAE5B0C4D85178829287D072B628FF87(L_8, 7, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_10 = __this->get_inventory_10();
		bool L_11;
		L_11 = Container_CheckIfContainsID_mB5DE7DCEFAE5B0C4D85178829287D072B628FF87(L_10, 8, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0056:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void TempDialogue::Hurt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempDialogue_Hurt_mB762E23BA84EDE4033D6EE1313F711EA6831A2B4 (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, const RuntimeMethod* method)
{
	{
		// if (c != null)
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0 = __this->get_c_12();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// c = null;
		__this->set_c_12((Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 *)NULL);
	}

IL_000f:
	{
		// PlugDialogue(hitDialogue[Random.Range(0, hitDialogue.Length)]);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_hitDialogue_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = __this->get_hitDialogue_5();
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		TempDialogue_PlugDialogue_mBE17240C7B4D319F9E2504E90F0F676C5D564260(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TempDialogue::PlugDialogue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempDialogue_PlugDialogue_mBE17240C7B4D319F9E2504E90F0F676C5D564260 (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = s;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_8();
		String_t* L_1 = ___s0;
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// RectTransform rectText = text.GetComponent<RectTransform>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_text_8();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3;
		L_3 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_2, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		// rectText.sizeDelta= new Vector2(rectText.sizeDelta.x, text.preferredHeight);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = L_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_x_0();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_text_8();
		float L_8;
		L_8 = VirtFuncInvoker0< float >::Invoke(82 /* System.Single UnityEngine.UI.Text::get_preferredHeight() */, L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), L_6, L_8, /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_4, L_9, /*hidden argument*/NULL);
		// textBox.sizeDelta = new Vector2(textBox.sizeDelta.x,2100+text.preferredHeight*10);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = __this->get_textBox_9();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = __this->get_textBox_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_0();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_text_8();
		float L_15;
		L_15 = VirtFuncInvoker0< float >::Invoke(82 /* System.Single UnityEngine.UI.Text::get_preferredHeight() */, L_14);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), L_13, ((float)il2cpp_codegen_add((float)(2100.0f), (float)((float)il2cpp_codegen_multiply((float)L_15, (float)(10.0f))))), /*hidden argument*/NULL);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_10, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TempDialogue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TempDialogue__ctor_m38954430689DB2E5420D4A6E68A7554092BD4445 (TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TileData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData__ctor_m4C6121ED40455AB2EDCACC003344604361E60412 (TileData_t5D7BA97D0860F9D334D053FBCF68D5348993C14A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackScript/<FadeLine>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeLineU3Ed__23__ctor_m2222ECADA4C79B9ECDEB805B8C7672DE29E18E3A (U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AttackScript/<FadeLine>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeLineU3Ed__23_System_IDisposable_Dispose_mD100DA22EC01D3EB4D42C5D5DA944CE340217690 (U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AttackScript/<FadeLine>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeLineU3Ed__23_MoveNext_m40ED3D0CBE6C465D9EA8FE0E47DA648649AB6161 (U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00f2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i = 0; i < 30; i++)
		__this->set_U3CiU3E5__2_3(0);
		goto IL_0109;
	}

IL_002d:
	{
		// LR.startColor = new Color(LR.startColor.r, LR.startColor.b, LR.startColor.g, LR.startColor.a / 1.25f);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_4 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_5 = L_4->get_LR_4();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_6 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_7 = L_6->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_r_0();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_10 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_11 = L_10->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_b_2();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_14 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_15 = L_14->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16;
		L_16 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_g_1();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_18 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_19 = L_18->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_20;
		L_20 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_22), L_9, L_13, L_17, ((float)((float)L_21/(float)(1.25f))), /*hidden argument*/NULL);
		LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7(L_5, L_22, /*hidden argument*/NULL);
		// LR.endColor = new Color(LR.endColor.r, LR.endColor.b, LR.endColor.g, LR.endColor.a / 1.15f);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_23 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_24 = L_23->get_LR_4();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_25 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_26 = L_25->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_r_0();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_29 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_30 = L_29->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_b_2();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_33 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_34 = L_33->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_35;
		L_35 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_g_1();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_37 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_38 = L_37->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_39;
		L_39 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_41), L_28, L_32, L_36, ((float)((float)L_40/(float)(1.14999998f))), /*hidden argument*/NULL);
		LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2(L_24, L_41, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.015f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_42 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_42, (0.0149999997f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_42);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i = 0; i < 30; i++)
		int32_t L_43 = __this->get_U3CiU3E5__2_3();
		V_2 = L_43;
		int32_t L_44 = V_2;
		__this->set_U3CiU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1)));
	}

IL_0109:
	{
		// for(int i = 0; i < 30; i++)
		int32_t L_45 = __this->get_U3CiU3E5__2_3();
		if ((((int32_t)L_45) < ((int32_t)((int32_t)30))))
		{
			goto IL_002d;
		}
	}
	{
		// LR.startColor = new Color(LR.startColor.r, LR.startColor.b, LR.startColor.g, 0);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_46 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_47 = L_46->get_LR_4();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_48 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_49 = L_48->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_50;
		L_50 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_49, /*hidden argument*/NULL);
		float L_51 = L_50.get_r_0();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_52 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_53 = L_52->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54;
		L_54 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_53, /*hidden argument*/NULL);
		float L_55 = L_54.get_b_2();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_56 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_57 = L_56->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_58;
		L_58 = LineRenderer_get_startColor_mB4DC280E4C9B3A7EA09CBD2BF7AC16D7C35C6EBB(L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_60), L_51, L_55, L_59, (0.0f), /*hidden argument*/NULL);
		LineRenderer_set_startColor_m7C75698F11565606CEA049DD3AE0514BADBF6BB7(L_47, L_60, /*hidden argument*/NULL);
		// LR.endColor = new Color(LR.endColor.r, LR.endColor.b, LR.endColor.g, 0);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_61 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_62 = L_61->get_LR_4();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_63 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_64 = L_63->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_65;
		L_65 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_64, /*hidden argument*/NULL);
		float L_66 = L_65.get_r_0();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_67 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_68 = L_67->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_69;
		L_69 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_68, /*hidden argument*/NULL);
		float L_70 = L_69.get_b_2();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_71 = V_1;
		LineRenderer_t237E878F3E77C127A540DE7AC4681B3706727967 * L_72 = L_71->get_LR_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_73;
		L_73 = LineRenderer_get_endColor_m36BF769D80F7F94C9EA64AC571E8C3690E71897D(L_72, /*hidden argument*/NULL);
		float L_74 = L_73.get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_75;
		memset((&L_75), 0, sizeof(L_75));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_75), L_66, L_70, L_74, (0.0f), /*hidden argument*/NULL);
		LineRenderer_set_endColor_mF9F043C0EE5E36AD5B36547A17171ECA6967CDE2(L_62, L_75, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AttackScript/<FadeLine>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeLineU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3BE52468C7CA4A2C6EC659F742228D38B832D8C6 (U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AttackScript/<FadeLine>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeLineU3Ed__23_System_Collections_IEnumerator_Reset_m568DF1D50EB7116D1C8828E441DAF778D2DD5505 (U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeLineU3Ed__23_System_Collections_IEnumerator_Reset_m568DF1D50EB7116D1C8828E441DAF778D2DD5505_RuntimeMethod_var)));
	}
}
// System.Object AttackScript/<FadeLine>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeLineU3Ed__23_System_Collections_IEnumerator_get_Current_m68A57DDBBBE6507EEA005AC2DDE4F21AB993B1E9 (U3CFadeLineU3Ed__23_tF2CB1727B8EFD57D1C12EACE6766538CAD13C4F7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackScript/<SizeSwingShift>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSizeSwingShiftU3Ed__21__ctor_m18F54E9007CED16799969AC547EC878A90A27CAF (U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AttackScript/<SizeSwingShift>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSizeSwingShiftU3Ed__21_System_IDisposable_Dispose_m654007BAD84956DC8489615D3E5A65E462E065F2 (U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AttackScript/<SizeSwingShift>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSizeSwingShiftU3Ed__21_MoveNext_m2C2350E0ECCBA48E040097D28A3F1F114633BF46 (U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d2;
			}
			case 2:
			{
				goto IL_017b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bat.transform.localScale = new Vector3(1, 1, 1);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_3 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_6, /*hidden argument*/NULL);
		// for (int x = 0; x < 10; x++)
		__this->set_U3CxU3E5__2_3(0);
		goto IL_00e9;
	}

IL_0059:
	{
		// bat.transform.localScale = new Vector3(bat.transform.localScale.x + .07f, bat.transform.localScale.y + .05f, bat.transform.localScale.z);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_7 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_10 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_10->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_15 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_20 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), ((float)il2cpp_codegen_add((float)L_14, (float)(0.0700000003f))), ((float)il2cpp_codegen_add((float)L_19, (float)(0.0500000007f))), L_24, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_9, L_25, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_26 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_26, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_26);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 10; x++)
		int32_t L_27 = __this->get_U3CxU3E5__2_3();
		V_2 = L_27;
		int32_t L_28 = V_2;
		__this->set_U3CxU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
	}

IL_00e9:
	{
		// for (int x = 0; x < 10; x++)
		int32_t L_29 = __this->get_U3CxU3E5__2_3();
		if ((((int32_t)L_29) < ((int32_t)((int32_t)10))))
		{
			goto IL_0059;
		}
	}
	{
		// for (int x = 0; x < 10; x++)
		__this->set_U3CxU3E5__2_3(0);
		goto IL_0192;
	}

IL_0102:
	{
		// bat.transform.localScale = new Vector3(bat.transform.localScale.x - .07f, bat.transform.localScale.y - .05f, bat.transform.localScale.z);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_30 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = L_30->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_33 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = L_33->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_35, /*hidden argument*/NULL);
		float L_37 = L_36.get_x_2();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_38 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = L_38->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_40, /*hidden argument*/NULL);
		float L_42 = L_41.get_y_3();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_43 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = L_43->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_48), ((float)il2cpp_codegen_subtract((float)L_37, (float)(0.0700000003f))), ((float)il2cpp_codegen_subtract((float)L_42, (float)(0.0500000007f))), L_47, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_32, L_48, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.005f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_49 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_49, (0.00499999989f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_49);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_017b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 10; x++)
		int32_t L_50 = __this->get_U3CxU3E5__2_3();
		V_2 = L_50;
		int32_t L_51 = V_2;
		__this->set_U3CxU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1)));
	}

IL_0192:
	{
		// for (int x = 0; x < 10; x++)
		int32_t L_52 = __this->get_U3CxU3E5__2_3();
		if ((((int32_t)L_52) < ((int32_t)((int32_t)10))))
		{
			goto IL_0102;
		}
	}
	{
		// bat.transform.localScale = new Vector3(1, 1, 1);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_53 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = L_53->get_bat_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_54, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_56), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_55, L_56, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AttackScript/<SizeSwingShift>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSizeSwingShiftU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4D8FE88AF312496732FEA02329B6BBB1D3429580 (U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AttackScript/<SizeSwingShift>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSizeSwingShiftU3Ed__21_System_Collections_IEnumerator_Reset_m4BCAB62574719496EF9BDD8FBE028E15D5092E9B (U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSizeSwingShiftU3Ed__21_System_Collections_IEnumerator_Reset_m4BCAB62574719496EF9BDD8FBE028E15D5092E9B_RuntimeMethod_var)));
	}
}
// System.Object AttackScript/<SizeSwingShift>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSizeSwingShiftU3Ed__21_System_Collections_IEnumerator_get_Current_mC305101D4125C36229F87C50316E4020F69D4F29 (U3CSizeSwingShiftU3Ed__21_tDCB9C7389D483A731637DB14BC2321B73943D923 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AttackScript/<StartSwing>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSwingU3Ed__20__ctor_m46DBCCF5B23DB90A84F7CEEE8705A8C52F098C08 (U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AttackScript/<StartSwing>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSwingU3Ed__20_System_IDisposable_Dispose_m1FEDF2CC137491F64C7314958599FDCA915B3C3A (U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AttackScript/<StartSwing>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartSwingU3Ed__20_MoveNext_mBA0DB2182C6CC2D247EDBDBEC18A528CDCB633B8 (U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(SoundMaster.soundOn)
		bool L_4 = ((SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_StaticFields*)il2cpp_codegen_static_fields_for(SoundMaster_t4B4BC0C6BA725474171736F52806AD864DC34159_il2cpp_TypeInfo_var))->get_soundOn_4();
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		// AS.PlayOneShot(swingSound);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_5 = V_1;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5->get_AS_17();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_7 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = L_7->get_swingSound_19();
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// StartCoroutine(SizeSwingShift());
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_9 = V_1;
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_10 = V_1;
		RuntimeObject* L_11;
		L_11 = AttackScript_SizeSwingShift_mE872BE82399EBDC54611FDA871EA43B42A8A8656(L_10, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_12;
		L_12 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_9, L_11, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(hotbar.GetComponent<MeleeWeapon>().attackDelay);
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_13 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_hotbar_11();
		MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * L_15;
		L_15 = GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3(L_14, /*hidden argument*/GameObject_GetComponent_TisMeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5_m8C6FABCBC8740EEA1AE42DC5E08E2EEA1AE91EB3_RuntimeMethod_var);
		float L_16 = ((Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 *)L_15)->get_attackDelay_11();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_17 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_17, L_16, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0067:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Swing();
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_18 = V_1;
		AttackScript_Swing_m4428C17733D1898331B688B4BCE9738F4B2F37D1(L_18, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object AttackScript/<StartSwing>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartSwingU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB711CB613EC6D33A649C9F51E1AB48B230942AEE (U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AttackScript/<StartSwing>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartSwingU3Ed__20_System_Collections_IEnumerator_Reset_m8969BAB7A2BFF2220EA7B22FB78AC712218A4DCD (U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartSwingU3Ed__20_System_Collections_IEnumerator_Reset_m8969BAB7A2BFF2220EA7B22FB78AC712218A4DCD_RuntimeMethod_var)));
	}
}
// System.Object AttackScript/<StartSwing>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartSwingU3Ed__20_System_Collections_IEnumerator_get_Current_m6ACDE10C686618276EABD5F94E15AF776B900FF4 (U3CStartSwingU3Ed__20_t9FBC95B96B224603E0F1D7393EF89AC5A73A9536 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueChoice/<CloseDialogueWindow>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseDialogueWindowU3Ed__20__ctor_mD4FAE0F8C5247C2A8BDBAE3CBBE6434927BE8FF4 (U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DialogueChoice/<CloseDialogueWindow>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseDialogueWindowU3Ed__20_System_IDisposable_Dispose_m5241ADA1F9F7BDC08285273D0B92A6E97790EBEE (U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DialogueChoice/<CloseDialogueWindow>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCloseDialogueWindowU3Ed__20_MoveNext_mF49BDF99674984214E20E5FE2139C446C3980CBC (U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF2A70D0EF9367B1493641397DB64D64CF25C751);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00f8;
			}
			case 2:
			{
				goto IL_0254;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SpriteRenderer windowRenderer = window.GetComponent<SpriteRenderer>();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_3 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_window_21();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_4, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_U3CwindowRendererU3E5__2_3(L_5);
		// SpriteRenderer overlay = GameObject.Find("DialogueOverlay").GetComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCF2A70D0EF9367B1493641397DB64D64CF25C751, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7;
		L_7 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_6, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_U3CoverlayU3E5__3_4(L_7);
		// Vector3 pos = window.transform.position;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_8 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = L_8->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		__this->set_U3CposU3E5__4_5(L_11);
		// overlay.color = new Color(1, 1, 1, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_12 = __this->get_U3CoverlayU3E5__3_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_13), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_12, L_13, /*hidden argument*/NULL);
		// pos = new Vector3(pos.x + 15, pos.y, pos.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_U3CposU3E5__4_5();
		float L_15 = L_14->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_U3CposU3E5__4_5();
		float L_17 = L_16->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_U3CposU3E5__4_5();
		float L_19 = L_18->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), ((float)il2cpp_codegen_add((float)L_15, (float)(15.0f))), L_17, L_19, /*hidden argument*/NULL);
		__this->set_U3CposU3E5__4_5(L_20);
		// windowRenderer.color = new Color(1, 1, 1, 1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_21 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_22), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_21, L_22, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_23 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_23, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00f8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 100; x++)
		__this->set_U3CxU3E5__5_6(0);
		goto IL_026b;
	}

IL_010b:
	{
		// window.transform.position = new Vector3((pos.x + window.transform.position.x * 9) / 10, (pos.y + window.transform.position.y * 9) / 10, window.transform.position.z);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_24 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_24->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_U3CposU3E5__4_5();
		float L_28 = L_27->get_x_2();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_29 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = L_29->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_U3CposU3E5__4_5();
		float L_35 = L_34->get_y_3();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_36 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_36->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_y_3();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_41 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = L_41->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_43, /*hidden argument*/NULL);
		float L_45 = L_44.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_46), ((float)((float)((float)il2cpp_codegen_add((float)L_28, (float)((float)il2cpp_codegen_multiply((float)L_33, (float)(9.0f)))))/(float)(10.0f))), ((float)((float)((float)il2cpp_codegen_add((float)L_35, (float)((float)il2cpp_codegen_multiply((float)L_40, (float)(9.0f)))))/(float)(10.0f))), L_45, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_26, L_46, /*hidden argument*/NULL);
		// windowRenderer.color = new Color(windowRenderer.color.r, windowRenderer.color.g, windowRenderer.color.b, windowRenderer.color.a - .01f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_47 = __this->get_U3CwindowRendererU3E5__2_3();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_48 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49;
		L_49 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_r_0();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_51 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52;
		L_52 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_g_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_54 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55;
		L_55 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_54, /*hidden argument*/NULL);
		float L_56 = L_55.get_b_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_57 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_58;
		L_58 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_57, /*hidden argument*/NULL);
		float L_59 = L_58.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_60), L_50, L_53, L_56, ((float)il2cpp_codegen_subtract((float)L_59, (float)(0.00999999978f))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_47, L_60, /*hidden argument*/NULL);
		// overlay.color = new Color(overlay.color.r, overlay.color.g, overlay.color.b, overlay.color.a - .01f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_61 = __this->get_U3CoverlayU3E5__3_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_62 = __this->get_U3CoverlayU3E5__3_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63;
		L_63 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_r_0();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_65 = __this->get_U3CoverlayU3E5__3_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_66;
		L_66 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_65, /*hidden argument*/NULL);
		float L_67 = L_66.get_g_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_68 = __this->get_U3CoverlayU3E5__3_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_69;
		L_69 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_68, /*hidden argument*/NULL);
		float L_70 = L_69.get_b_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_71 = __this->get_U3CoverlayU3E5__3_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_72;
		L_72 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_71, /*hidden argument*/NULL);
		float L_73 = L_72.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_74;
		memset((&L_74), 0, sizeof(L_74));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_74), L_64, L_67, L_70, ((float)il2cpp_codegen_subtract((float)L_73, (float)(0.00999999978f))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_61, L_74, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.0175f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_75 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_75, (0.0175000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_75);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0254:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 100; x++)
		int32_t L_76 = __this->get_U3CxU3E5__5_6();
		V_2 = L_76;
		int32_t L_77 = V_2;
		__this->set_U3CxU3E5__5_6(((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1)));
	}

IL_026b:
	{
		// for (int x = 0; x < 100; x++)
		int32_t L_78 = __this->get_U3CxU3E5__5_6();
		if ((((int32_t)L_78) < ((int32_t)((int32_t)100))))
		{
			goto IL_010b;
		}
	}
	{
		// Destroy(gameObject);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_79 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80;
		L_80 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_79, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_80, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object DialogueChoice/<CloseDialogueWindow>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCloseDialogueWindowU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFE7FFA9BEA3E4A871F8DD70273595BF38214B226 (U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DialogueChoice/<CloseDialogueWindow>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseDialogueWindowU3Ed__20_System_Collections_IEnumerator_Reset_m576A91FA1EAD8CDB1D6DE409CF3B8EE03CB311C3 (U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCloseDialogueWindowU3Ed__20_System_Collections_IEnumerator_Reset_m576A91FA1EAD8CDB1D6DE409CF3B8EE03CB311C3_RuntimeMethod_var)));
	}
}
// System.Object DialogueChoice/<CloseDialogueWindow>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCloseDialogueWindowU3Ed__20_System_Collections_IEnumerator_get_Current_mB304C8A935EEE1FB22BA6A18CD326B12D1EA07C8 (U3CCloseDialogueWindowU3Ed__20_t7CC59A6497C6539E0421A85EE6391446E4742BDF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueChoice/<OpenDialogueWindow>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDialogueWindowU3Ed__21__ctor_mC9D0A8EE24408AA45264AB632BD65DA4D8A071E6 (U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DialogueChoice/<OpenDialogueWindow>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDialogueWindowU3Ed__21_System_IDisposable_Dispose_m409C95CE6B895DBF421D3021DECFA3C75258FFD3 (U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DialogueChoice/<OpenDialogueWindow>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COpenDialogueWindowU3Ed__21_MoveNext_mA6AB5CE9AF91C7E46AEDD55118D47975C1C6CD95 (U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF2A70D0EF9367B1493641397DB64D64CF25C751);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_01f6;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SpriteRenderer windowRenderer = window.GetComponent<SpriteRenderer>();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_window_21();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6;
		L_6 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_5, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_U3CwindowRendererU3E5__2_3(L_6);
		// SpriteRenderer overlay = GameObject.Find("DialogueOverlay").GetComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCF2A70D0EF9367B1493641397DB64D64CF25C751, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8;
		L_8 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_7, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		__this->set_U3CoverlayU3E5__3_4(L_8);
		// Vector3 pos = window.transform.position;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_9 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		__this->set_U3CposU3E5__4_5(L_12);
		// pos = new Vector3(0, 0, pos.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_U3CposU3E5__4_5();
		float L_14 = L_13->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_15), (0.0f), (0.0f), L_14, /*hidden argument*/NULL);
		__this->set_U3CposU3E5__4_5(L_15);
		// windowRenderer.color = new Color(1, 1, 1, 0);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_16 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_17), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_16, L_17, /*hidden argument*/NULL);
		// for (int x = 0; x < 100; x++)
		__this->set_U3CxU3E5__5_6(0);
		goto IL_020d;
	}

IL_00ad:
	{
		// window.transform.position = new Vector3((pos.x + window.transform.position.x * 9) / 10, (pos.y + window.transform.position.y * 9) / 10, window.transform.position.z);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_18 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_18->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = __this->get_address_of_U3CposU3E5__4_5();
		float L_22 = L_21->get_x_2();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_23 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_28 = __this->get_address_of_U3CposU3E5__4_5();
		float L_29 = L_28->get_y_3();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_30 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = L_30->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_35 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = L_35->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38;
		L_38 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_37, /*hidden argument*/NULL);
		float L_39 = L_38.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_40), ((float)((float)((float)il2cpp_codegen_add((float)L_22, (float)((float)il2cpp_codegen_multiply((float)L_27, (float)(9.0f)))))/(float)(10.0f))), ((float)((float)((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_34, (float)(9.0f)))))/(float)(10.0f))), L_39, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_40, /*hidden argument*/NULL);
		// windowRenderer.color = new Color(windowRenderer.color.r, windowRenderer.color.g, windowRenderer.color.b, windowRenderer.color.a + .01f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_41 = __this->get_U3CwindowRendererU3E5__2_3();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_42 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		L_43 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_r_0();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_45 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
		L_46 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_g_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_48 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49;
		L_49 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_b_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_51 = __this->get_U3CwindowRendererU3E5__2_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52;
		L_52 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54;
		memset((&L_54), 0, sizeof(L_54));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_54), L_44, L_47, L_50, ((float)il2cpp_codegen_add((float)L_53, (float)(0.00999999978f))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_41, L_54, /*hidden argument*/NULL);
		// overlay.color = new Color(overlay.color.r, overlay.color.g, overlay.color.b, overlay.color.a + .01f);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_55 = __this->get_U3CoverlayU3E5__3_4();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_56 = __this->get_U3CoverlayU3E5__3_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_57;
		L_57 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_56, /*hidden argument*/NULL);
		float L_58 = L_57.get_r_0();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_59 = __this->get_U3CoverlayU3E5__3_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_60;
		L_60 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_59, /*hidden argument*/NULL);
		float L_61 = L_60.get_g_1();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_62 = __this->get_U3CoverlayU3E5__3_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_63;
		L_63 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_b_2();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_65 = __this->get_U3CoverlayU3E5__3_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_66;
		L_66 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_65, /*hidden argument*/NULL);
		float L_67 = L_66.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68;
		memset((&L_68), 0, sizeof(L_68));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_68), L_58, L_61, L_64, ((float)il2cpp_codegen_add((float)L_67, (float)(0.00999999978f))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_55, L_68, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.0175f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_69 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_69, (0.0175000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_69);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01f6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 100; x++)
		int32_t L_70 = __this->get_U3CxU3E5__5_6();
		V_2 = L_70;
		int32_t L_71 = V_2;
		__this->set_U3CxU3E5__5_6(((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1)));
	}

IL_020d:
	{
		// for (int x = 0; x < 100; x++)
		int32_t L_72 = __this->get_U3CxU3E5__5_6();
		if ((((int32_t)L_72) < ((int32_t)((int32_t)100))))
		{
			goto IL_00ad;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DialogueChoice/<OpenDialogueWindow>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COpenDialogueWindowU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m777DD0CB6AB9E864FF0A1273A155D8DF2B134CFD (U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DialogueChoice/<OpenDialogueWindow>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenDialogueWindowU3Ed__21_System_Collections_IEnumerator_Reset_mD478435A343AD1E26C2873450895294D518CA598 (U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COpenDialogueWindowU3Ed__21_System_Collections_IEnumerator_Reset_mD478435A343AD1E26C2873450895294D518CA598_RuntimeMethod_var)));
	}
}
// System.Object DialogueChoice/<OpenDialogueWindow>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3COpenDialogueWindowU3Ed__21_System_Collections_IEnumerator_get_Current_m55CFB6CE81D8401C1773C684AC02DD1B185941CF (U3COpenDialogueWindowU3Ed__21_t0BA001BE1948F92F61CF90ED0BA6EFEA5BCC6ED4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueChoice/<ShiftWindowRight>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShiftWindowRightU3Ed__19__ctor_m6F4D39B91E686DE396EDB05880C5FB09B3E1E302 (U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DialogueChoice/<ShiftWindowRight>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShiftWindowRightU3Ed__19_System_IDisposable_Dispose_m68955D717EC15C028AA183319AFF954DC812883F (U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DialogueChoice/<ShiftWindowRight>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShiftWindowRightU3Ed__19_MoveNext_mDFCA43CF08E251BEB0EE86E8746285BDFCD2BDBD (U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0112;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 pos = window.transform.position;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_U3CposU3E5__2_3(L_7);
		// pos = new Vector3(pos.x + 2, pos.y, pos.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_U3CposU3E5__2_3();
		float L_9 = L_8->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_U3CposU3E5__2_3();
		float L_11 = L_10->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_U3CposU3E5__2_3();
		float L_13 = L_12->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), ((float)il2cpp_codegen_add((float)L_9, (float)(2.0f))), L_11, L_13, /*hidden argument*/NULL);
		__this->set_U3CposU3E5__2_3(L_14);
		// for (int x = 0; x < 100; x++)
		__this->set_U3CxU3E5__3_4(0);
		goto IL_0129;
	}

IL_0075:
	{
		// window.transform.position = new Vector3((pos.x + window.transform.position.x * 9) / 10, (pos.y + window.transform.position.y * 9) / 10, window.transform.position.z);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_15 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_15->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_U3CposU3E5__2_3();
		float L_19 = L_18->get_x_2();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_20 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_U3CposU3E5__2_3();
		float L_26 = L_25->get_y_3();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_27 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = L_27->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_y_3();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_32 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = L_32->get_window_21();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), ((float)((float)((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_24, (float)(9.0f)))))/(float)(10.0f))), ((float)((float)((float)il2cpp_codegen_add((float)L_26, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)(9.0f)))))/(float)(10.0f))), L_36, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_37, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.0175f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_38 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_38, (0.0175000001f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_38);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0112:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 100; x++)
		int32_t L_39 = __this->get_U3CxU3E5__3_4();
		V_2 = L_39;
		int32_t L_40 = V_2;
		__this->set_U3CxU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)));
	}

IL_0129:
	{
		// for (int x = 0; x < 100; x++)
		int32_t L_41 = __this->get_U3CxU3E5__3_4();
		if ((((int32_t)L_41) < ((int32_t)((int32_t)100))))
		{
			goto IL_0075;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DialogueChoice/<ShiftWindowRight>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShiftWindowRightU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2993897B58D29E7ACA5CF21395B0FD0D7248AB93 (U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DialogueChoice/<ShiftWindowRight>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShiftWindowRightU3Ed__19_System_Collections_IEnumerator_Reset_mDDF32425EA13375E19558BCADBC0AE6CC5368B3C (U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShiftWindowRightU3Ed__19_System_Collections_IEnumerator_Reset_mDDF32425EA13375E19558BCADBC0AE6CC5368B3C_RuntimeMethod_var)));
	}
}
// System.Object DialogueChoice/<ShiftWindowRight>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CShiftWindowRightU3Ed__19_System_Collections_IEnumerator_get_Current_mF50E2472DF3872F41ADD7F2BAE421E8CCBA5329C (U3CShiftWindowRightU3Ed__19_t87BA1CB8E3ACFC8E27604CBE93408F8BE7E21783 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueChoice/<WriteToTextBox>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteToTextBoxU3Ed__23__ctor_m9B62C55D11DFF30FD20ADB5D54F64944A8301B11 (U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DialogueChoice/<WriteToTextBox>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteToTextBoxU3Ed__23_System_IDisposable_Dispose_m3D8B77297809272F62AB19EE9B9BC3F77B6A717C (U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DialogueChoice/<WriteToTextBox>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWriteToTextBoxU3Ed__23_MoveNext_mEC2EB8F95197340B9EC83C2AB317F84D00DC9312 (U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82_m98EB14B2D684AB2CAD077F9B403EE218C29AD079_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tB01A3C34C6771AA2422AFB70485E860D8CA3DAC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0AF6CBE9055E66D41470BE91A557FC19A093436);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF069EC4EC7E149A5B5D512DCB169853546760362);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0052;
			}
			case 2:
			{
				goto IL_01fe;
			}
			case 3:
			{
				goto IL_023e;
			}
			case 4:
			{
				goto IL_028c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (hasPause)
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_3 = V_1;
		bool L_4 = L_3->get_hasPause_20();
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0052:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0059:
	{
		// bool isClosing = false;
		__this->set_U3CisClosingU3E5__2_3((bool)0);
		// for(int i = 0; i<characterDialogue.Length; i++)
		__this->set_U3CiU3E5__3_4(0);
		goto IL_0255;
	}

IL_006c:
	{
		// if (characterDialogue[i] != '@'&& characterDialogue[i] != '*')
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_6 = V_1;
		String_t* L_7 = L_6->get_characterDialogue_15();
		int32_t L_8 = __this->get_U3CiU3E5__3_4();
		Il2CppChar L_9;
		L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)64))))
		{
			goto IL_0131;
		}
	}
	{
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_10 = V_1;
		String_t* L_11 = L_10->get_characterDialogue_15();
		int32_t L_12 = __this->get_U3CiU3E5__3_4();
		Il2CppChar L_13;
		L_13 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_11, L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) == ((int32_t)((int32_t)42))))
		{
			goto IL_0131;
		}
	}
	{
		// if (isClosing)
		bool L_14 = __this->get_U3CisClosingU3E5__2_3();
		if (!L_14)
		{
			goto IL_00d2;
		}
	}
	{
		// DialogueOnScreen.text = DialogueOnScreen.text.Substring(0, DialogueOnScreen.text.Length - 8);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_15 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15->get_DialogueOnScreen_16();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_17 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = L_17->get_DialogueOnScreen_16();
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_18);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_20 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_DialogueOnScreen_16();
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_21);
		int32_t L_23;
		L_23 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_22, /*hidden argument*/NULL);
		String_t* L_24;
		L_24 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_19, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)8)), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_24);
	}

IL_00d2:
	{
		// DialogueOnScreen.text = DialogueOnScreen.text + characterDialogue[i];
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_25 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_26 = L_25->get_DialogueOnScreen_16();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_27 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = L_27->get_DialogueOnScreen_16();
		String_t* L_29;
		L_29 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_28);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_30 = V_1;
		String_t* L_31 = L_30->get_characterDialogue_15();
		int32_t L_32 = __this->get_U3CiU3E5__3_4();
		Il2CppChar L_33;
		L_33 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_31, L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		String_t* L_34;
		L_34 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_2), /*hidden argument*/NULL);
		String_t* L_35;
		L_35 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_29, L_34, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_35);
		// if (isClosing)
		bool L_36 = __this->get_U3CisClosingU3E5__2_3();
		if (!L_36)
		{
			goto IL_0225;
		}
	}
	{
		// DialogueOnScreen.text += "</color>";
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_37 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = L_37->get_DialogueOnScreen_16();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39 = L_38;
		String_t* L_40;
		L_40 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_39);
		String_t* L_41;
		L_41 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_40, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_41);
		// } else if (characterDialogue[i] == '*' && isClosing == false)
		goto IL_0225;
	}

IL_0131:
	{
		// } else if (characterDialogue[i] == '*' && isClosing == false)
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_42 = V_1;
		String_t* L_43 = L_42->get_characterDialogue_15();
		int32_t L_44 = __this->get_U3CiU3E5__3_4();
		Il2CppChar L_45;
		L_45 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_43, L_44, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0175;
		}
	}
	{
		bool L_46 = __this->get_U3CisClosingU3E5__2_3();
		if (L_46)
		{
			goto IL_0175;
		}
	}
	{
		// isClosing = true;
		__this->set_U3CisClosingU3E5__2_3((bool)1);
		// DialogueOnScreen.text += "<color=#EFA310>*</color>";
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_47 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_48 = L_47->get_DialogueOnScreen_16();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_49 = L_48;
		String_t* L_50;
		L_50 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_49);
		String_t* L_51;
		L_51 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_50, _stringLiteralF069EC4EC7E149A5B5D512DCB169853546760362, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_51);
		// }else if (characterDialogue[i] == '*' && isClosing)
		goto IL_0225;
	}

IL_0175:
	{
		// }else if (characterDialogue[i] == '*' && isClosing)
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_52 = V_1;
		String_t* L_53 = L_52->get_characterDialogue_15();
		int32_t L_54 = __this->get_U3CiU3E5__3_4();
		Il2CppChar L_55;
		L_55 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_53, L_54, /*hidden argument*/NULL);
		bool L_56 = __this->get_U3CisClosingU3E5__2_3();
		if (!((int32_t)((int32_t)((((int32_t)L_55) == ((int32_t)((int32_t)42)))? 1 : 0)&(int32_t)L_56)))
		{
			goto IL_01e5;
		}
	}
	{
		// isClosing = false;
		__this->set_U3CisClosingU3E5__2_3((bool)0);
		// DialogueOnScreen.text = DialogueOnScreen.text.Substring(0, DialogueOnScreen.text.Length - 8);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_57 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_58 = L_57->get_DialogueOnScreen_16();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_59 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_60 = L_59->get_DialogueOnScreen_16();
		String_t* L_61;
		L_61 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_60);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_62 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_63 = L_62->get_DialogueOnScreen_16();
		String_t* L_64;
		L_64 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_63);
		int32_t L_65;
		L_65 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_64, /*hidden argument*/NULL);
		String_t* L_66;
		L_66 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_61, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)8)), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_58, L_66);
		// DialogueOnScreen.text += "*</color>";
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_67 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_68 = L_67->get_DialogueOnScreen_16();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_69 = L_68;
		String_t* L_70;
		L_70 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_69);
		String_t* L_71;
		L_71 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_70, _stringLiteralD0AF6CBE9055E66D41470BE91A557FC19A093436, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_69, L_71);
		// }
		goto IL_0225;
	}

IL_01e5:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_72 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_72, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_72);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01fe:
	{
		__this->set_U3CU3E1__state_0((-1));
		// DialogueOnScreen.text = DialogueOnScreen.text + "\n\n";
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_73 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_74 = L_73->get_DialogueOnScreen_16();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_75 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_76 = L_75->get_DialogueOnScreen_16();
		String_t* L_77;
		L_77 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_76);
		String_t* L_78;
		L_78 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_77, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_74, L_78);
	}

IL_0225:
	{
		// yield return new WaitForSeconds(.005f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_79 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_79, (0.00499999989f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_79);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_023e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int i = 0; i<characterDialogue.Length; i++)
		int32_t L_80 = __this->get_U3CiU3E5__3_4();
		V_3 = L_80;
		int32_t L_81 = V_3;
		__this->set_U3CiU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)1)));
	}

IL_0255:
	{
		// for(int i = 0; i<characterDialogue.Length; i++)
		int32_t L_82 = __this->get_U3CiU3E5__3_4();
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_83 = V_1;
		String_t* L_84 = L_83->get_characterDialogue_15();
		int32_t L_85;
		L_85 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_84, /*hidden argument*/NULL);
		if ((((int32_t)L_82) < ((int32_t)L_85)))
		{
			goto IL_006c;
		}
	}
	{
		// if (closeDialogue)
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_86 = V_1;
		bool L_87 = L_86->get_closeDialogue_9();
		if (!L_87)
		{
			goto IL_02a0;
		}
	}
	{
		// yield return new WaitForSeconds(.75f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_88 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_88, (0.75f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_88);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_028c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(CloseDialogueWindow());
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_89 = V_1;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_90 = V_1;
		RuntimeObject* L_91;
		L_91 = DialogueChoice_CloseDialogueWindow_mDEAC083D42393437BC0C7A5FAFBF9205AE27AE27(L_90, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_92;
		L_92 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_89, L_91, /*hidden argument*/NULL);
	}

IL_02a0:
	{
		// if (hasPause)
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_93 = V_1;
		bool L_94 = L_93->get_hasPause_20();
		if (!L_94)
		{
			goto IL_0382;
		}
	}
	{
		// float offset = 0;
		V_5 = (0.0f);
		// int y = 0;
		V_6 = 0;
		// for (int x = 0; x < choices.Length; x++)
		V_7 = 0;
		goto IL_0373;
	}

IL_02bd:
	{
		// dia = Instantiate(choices[x], par, true);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_95 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_96 = L_95->get_choices_11();
		int32_t L_97 = V_7;
		int32_t L_98 = L_97;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_99 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_100 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_101 = L_100->get_par_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_102;
		L_102 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7(L_99, L_101, (bool)1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mC197A913A8DF8E125DEFD1C13605BC1DFD23C2F7_RuntimeMethod_var);
		V_4 = L_102;
		// dia.GetComponent<RectTransform>().anchoredPosition = new Vector2(.4f, (-2.0f - (x - y) * .8f) - (offset * .6f));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_103 = V_4;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_104;
		L_104 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_103, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		int32_t L_105 = V_7;
		int32_t L_106 = V_6;
		float L_107 = V_5;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_108), (0.400000006f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(-2.0f), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_105, (int32_t)L_106)))), (float)(0.800000012f))))), (float)((float)il2cpp_codegen_multiply((float)L_107, (float)(0.600000024f))))), /*hidden argument*/NULL);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_104, L_108, /*hidden argument*/NULL);
		// dia.GetComponent<RectTransform>().localScale = new Vector3(.025f, .025f, 1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_109 = V_4;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_110;
		L_110 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_109, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_111), (0.0250000004f), (0.0250000004f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_110, L_111, /*hidden argument*/NULL);
		// Canvas.ForceUpdateCanvases();
		Canvas_ForceUpdateCanvases_m0D46827299273BBA96CE6FA6B8A12B8989B52ECE(/*hidden argument*/NULL);
		// if (dia.GetComponent<DialogueChoice>().qualified == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112 = V_4;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_113;
		L_113 = GameObject_GetComponent_TisDialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82_m98EB14B2D684AB2CAD077F9B403EE218C29AD079(L_112, /*hidden argument*/GameObject_GetComponent_TisDialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82_m98EB14B2D684AB2CAD077F9B403EE218C29AD079_RuntimeMethod_var);
		bool L_114 = L_113->get_qualified_19();
		if (!L_114)
		{
			goto IL_0360;
		}
	}
	{
		// offset += dia.GetComponent<Text>().cachedTextGenerator.lines.Count;
		float L_115 = V_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116 = V_4;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_117;
		L_117 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_116, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * L_118;
		L_118 = Text_get_cachedTextGenerator_mC1CA3F78904E1B2E5759DEA6EFDB1C13AB3BBB65(L_117, /*hidden argument*/NULL);
		RuntimeObject* L_119;
		L_119 = TextGenerator_get_lines_m3277C5BEA1392607B39B8CA03E902CE5AD7CEFC1(L_118, /*hidden argument*/NULL);
		int32_t L_120;
		L_120 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>::get_Count() */, ICollection_1_tB01A3C34C6771AA2422AFB70485E860D8CA3DAC5_il2cpp_TypeInfo_var, L_119);
		V_5 = ((float)il2cpp_codegen_add((float)L_115, (float)((float)((float)L_120))));
		// offset -= 1;
		float L_121 = V_5;
		V_5 = ((float)il2cpp_codegen_subtract((float)L_121, (float)(1.0f)));
		// }
		goto IL_036d;
	}

IL_0360:
	{
		// Destroy(dia);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_122 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_122, /*hidden argument*/NULL);
		// y++;
		int32_t L_123 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)1));
	}

IL_036d:
	{
		// for (int x = 0; x < choices.Length; x++)
		int32_t L_124 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)1));
	}

IL_0373:
	{
		// for (int x = 0; x < choices.Length; x++)
		int32_t L_125 = V_7;
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_126 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_127 = L_126->get_choices_11();
		if ((((int32_t)L_125) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_127)->max_length))))))
		{
			goto IL_02bd;
		}
	}

IL_0382:
	{
		// if(!closeDialogue)
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_128 = V_1;
		bool L_129 = L_128->get_closeDialogue_9();
		if (L_129)
		{
			goto IL_0395;
		}
	}
	{
		// Destroy(gameObject);
		DialogueChoice_tB5B313CBEF910A54832AA423265591CD96DECC82 * L_130 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_131;
		L_131 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_130, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_131, /*hidden argument*/NULL);
	}

IL_0395:
	{
		// }
		return (bool)0;
	}
}
// System.Object DialogueChoice/<WriteToTextBox>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWriteToTextBoxU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC785506AA940DC27A120AAFF3FCA74FF0D1D3DF3 (U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DialogueChoice/<WriteToTextBox>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteToTextBoxU3Ed__23_System_Collections_IEnumerator_Reset_m1EC862093D21F999A89FA02B3ACA022E45CAABD6 (U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWriteToTextBoxU3Ed__23_System_Collections_IEnumerator_Reset_m1EC862093D21F999A89FA02B3ACA022E45CAABD6_RuntimeMethod_var)));
	}
}
// System.Object DialogueChoice/<WriteToTextBox>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWriteToTextBoxU3Ed__23_System_Collections_IEnumerator_get_Current_mD3E51710A05E20653F00181AF47A184BD269CCF2 (U3CWriteToTextBoxU3Ed__23_tC12E78ABA6B16A64A39F07DCFC5EF985567C191E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Entity/<ResetColor>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetColorU3Ed__18__ctor_m2E7C4203BF0817C7049DDC4B89271185E4898765 (U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Entity/<ResetColor>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetColorU3Ed__18_System_IDisposable_Dispose_m4B563C7342D359F709F11D8D69AC44F69329918A (U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Entity/<ResetColor>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetColorU3Ed__18_MoveNext_m8ADC4AA3DB1F0CE306ACEC71F19201201127ABDC (U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00de;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 15; x++)
		__this->set_U3CxU3E5__2_3(0);
		goto IL_00f5;
	}

IL_002d:
	{
		// sr.color = new Color((normalColor.r + sr.color.r) / 2f, (normalColor.g + sr.color.g) / 2f, (normalColor.b + sr.color.b) / 2f, (normalColor.a + sr.color.a) / 2f);
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_4 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = L_4->get_sr_7();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_6 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_7 = L_6->get_address_of_normalColor_13();
		float L_8 = L_7->get_r_0();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_9 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_10 = L_9->get_sr_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_r_0();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_13 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_14 = L_13->get_address_of_normalColor_13();
		float L_15 = L_14->get_g_1();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_16 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_17 = L_16->get_sr_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_18;
		L_18 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_g_1();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_20 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_21 = L_20->get_address_of_normalColor_13();
		float L_22 = L_21->get_b_2();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_23 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_24 = L_23->get_sr_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25;
		L_25 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_b_2();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_27 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_28 = L_27->get_address_of_normalColor_13();
		float L_29 = L_28->get_a_3();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_30 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_31 = L_30->get_sr_7();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32;
		L_32 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_31, /*hidden argument*/NULL);
		float L_33 = L_32.get_a_3();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_34), ((float)((float)((float)il2cpp_codegen_add((float)L_8, (float)L_12))/(float)(2.0f))), ((float)((float)((float)il2cpp_codegen_add((float)L_15, (float)L_19))/(float)(2.0f))), ((float)((float)((float)il2cpp_codegen_add((float)L_22, (float)L_26))/(float)(2.0f))), ((float)((float)((float)il2cpp_codegen_add((float)L_29, (float)L_33))/(float)(2.0f))), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_5, L_34, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.05f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_35 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_35, (0.0500000007f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_35);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00de:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 15; x++)
		int32_t L_36 = __this->get_U3CxU3E5__2_3();
		V_2 = L_36;
		int32_t L_37 = V_2;
		__this->set_U3CxU3E5__2_3(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
	}

IL_00f5:
	{
		// for (int x = 0; x < 15; x++)
		int32_t L_38 = __this->get_U3CxU3E5__2_3();
		if ((((int32_t)L_38) < ((int32_t)((int32_t)15))))
		{
			goto IL_002d;
		}
	}
	{
		// sr.color = normalColor;
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_39 = V_1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_40 = L_39->get_sr_7();
		Entity_t044863A7B37E4AD27CE78D4B680109A139080095 * L_41 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_42 = L_41->get_normalColor_13();
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_40, L_42, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Entity/<ResetColor>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetColorU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m10BD31D77E8C4448F0C428C337EB04E85059F3E2 (U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Entity/<ResetColor>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetColorU3Ed__18_System_Collections_IEnumerator_Reset_m87950E0BAB190E1E496A23DC1DCEA8E7BE4B6FE0 (U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CResetColorU3Ed__18_System_Collections_IEnumerator_Reset_m87950E0BAB190E1E496A23DC1DCEA8E7BE4B6FE0_RuntimeMethod_var)));
	}
}
// System.Object Entity/<ResetColor>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetColorU3Ed__18_System_Collections_IEnumerator_get_Current_m952DF2302F55E41B48F742A2D2A7E4B1615776E6 (U3CResetColorU3Ed__18_t8D477CFC7E3B9F88B17773A8FADDB76DA412FB62 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hotbar/<Adjust>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdjustU3Ed__8__ctor_m2398A561547F7AC9D14A270278B09391865D9DB5 (U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Hotbar/<Adjust>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdjustU3Ed__8_System_IDisposable_Dispose_m74E52934B433B20F9B08AD865D3D6536BB2B6B48 (U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Hotbar/<Adjust>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAdjustU3Ed__8_MoveNext_m4E4D4E6777293DDB79940A4B16619B592D234175 (U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Destroy(GetComponent<Item>());
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_4 = V_1;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5;
		L_5 = Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D(L_4, /*hidden argument*/Component_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m7AE4CA3351670A5F4AD6EF591947AAAEB6FDEE7D_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// slotItem = null;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_6 = V_1;
		L_6->set_slotItem_9((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)NULL);
		// yield return new WaitForSeconds(.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
		// shrinkSlot(slots[activeSlotIndex]);
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_8 = V_1;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_9 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = L_9->get_slots_4();
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_11 = V_1;
		int32_t L_12 = L_11->get_activeSlotIndex_6();
		int32_t L_13 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Hotbar_shrinkSlot_mF704CF2B7F50BAEEC0AC806619D5C6A35EAA51A3(L_8, L_14, /*hidden argument*/NULL);
		// activeSlotIndex = x;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_15 = V_1;
		int32_t L_16 = __this->get_x_3();
		L_15->set_activeSlotIndex_6(L_16);
		// if (activeSlotIndex < 0)
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_17 = V_1;
		int32_t L_18 = L_17->get_activeSlotIndex_6();
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_008a;
		}
	}
	{
		// activeSlotIndex = slots.Length - 1;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_19 = V_1;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_20 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = L_20->get_slots_4();
		L_19->set_activeSlotIndex_6(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))), (int32_t)1)));
		goto IL_00a1;
	}

IL_008a:
	{
		// else if (activeSlotIndex >= slots.Length)
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_22 = V_1;
		int32_t L_23 = L_22->get_activeSlotIndex_6();
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_24 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = L_24->get_slots_4();
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_00a1;
		}
	}
	{
		// activeSlotIndex = 0;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_26 = V_1;
		L_26->set_activeSlotIndex_6(0);
	}

IL_00a1:
	{
		// expandSlot(slots[activeSlotIndex]);
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_27 = V_1;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_28 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_29 = L_28->get_slots_4();
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_30 = V_1;
		int32_t L_31 = L_30->get_activeSlotIndex_6();
		int32_t L_32 = L_31;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		Hotbar_expandSlot_m694A0627DF3E403423F95825920B8AFB54F9AB36(L_27, L_33, /*hidden argument*/NULL);
		// InsertItem(slots[activeSlotIndex].GetComponent<Item>());
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_34 = V_1;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_35 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_36 = L_35->get_slots_4();
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_37 = V_1;
		int32_t L_38 = L_37->get_activeSlotIndex_6();
		int32_t L_39 = L_38;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_41;
		L_41 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_40, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		Hotbar_InsertItem_mB50F49DB726223B7921AAC9B3C14462445A0544F(L_34, L_41, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Hotbar/<Adjust>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAdjustU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9FF3D405D91D61FE91194FBCAA681220A6E449C3 (U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Hotbar/<Adjust>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAdjustU3Ed__8_System_Collections_IEnumerator_Reset_m36FE67D119F1B7A36D77670D8B876F16EA1EA5EE (U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAdjustU3Ed__8_System_Collections_IEnumerator_Reset_m36FE67D119F1B7A36D77670D8B876F16EA1EA5EE_RuntimeMethod_var)));
	}
}
// System.Object Hotbar/<Adjust>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAdjustU3Ed__8_System_Collections_IEnumerator_get_Current_mFC9483E3A7A6D1004917A0E81D5FE93729BBEC19 (U3CAdjustU3Ed__8_t46AE02F1E2588E1693B0173A892C7D0E59569E6E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Hotbar/<DelayUpdate>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayUpdateU3Ed__13__ctor_mC957B6B9A4E5AA5D78951DB9B476259B9B976EC7 (U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Hotbar/<DelayUpdate>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayUpdateU3Ed__13_System_IDisposable_Dispose_mDD224210FD40A148DBE4879957343CCC0738C98B (U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Hotbar/<DelayUpdate>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDelayUpdateU3Ed__13_MoveNext_m7ECC9538AD1144BED713FE28A64F08769442CA5E (U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int y = 0; y < x; y++) {
		__this->set_U3CyU3E5__2_4(0);
		goto IL_0052;
	}

IL_0027:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_4 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int y = 0; y < x; y++) {
		int32_t L_5 = __this->get_U3CyU3E5__2_4();
		V_2 = L_5;
		int32_t L_6 = V_2;
		__this->set_U3CyU3E5__2_4(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
	}

IL_0052:
	{
		// for (int y = 0; y < x; y++) {
		int32_t L_7 = __this->get_U3CyU3E5__2_4();
		int32_t L_8 = __this->get_x_2();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0027;
		}
	}
	{
		// attackScript.UpdateItem();
		Hotbar_tC99BEC9D16A138480F26E708A86ED61AECDBC6CA * L_9 = V_1;
		AttackScript_tEEE53EDCBDD8EA7E17ECEA93531B77791E1B7B46 * L_10 = L_9->get_attackScript_5();
		AttackScript_UpdateItem_m2CDBABE85B274E29032217E2F82CF40CD04FDE59(L_10, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Hotbar/<DelayUpdate>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayUpdateU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8F753A488E1B7414DC7C826BCCA247C0D54F86B1 (U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Hotbar/<DelayUpdate>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDelayUpdateU3Ed__13_System_Collections_IEnumerator_Reset_m71077E8888F37B78A25FF630B233B5E1C39FCFD1 (U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDelayUpdateU3Ed__13_System_Collections_IEnumerator_Reset_m71077E8888F37B78A25FF630B233B5E1C39FCFD1_RuntimeMethod_var)));
	}
}
// System.Object Hotbar/<DelayUpdate>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDelayUpdateU3Ed__13_System_Collections_IEnumerator_get_Current_m5680074FFA7086795A80C326B8A02EBF004F3C12 (U3CDelayUpdateU3Ed__13_t542CD98C5EC65503D09E5522187F8A53625BAAB0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InventorySlot/<SizeShift>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSizeShiftU3Ed__14__ctor_m6B9DE24809AA4CF95224828393CA485D822BAFAD (U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InventorySlot/<SizeShift>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSizeShiftU3Ed__14_System_IDisposable_Dispose_mB08809DCCBD75C38EAAA953498994F2F885D8A09 (U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InventorySlot/<SizeShift>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSizeShiftU3Ed__14_MoveNext_m1AF9FE4C0F3D860525A21AB55AB4FCCB413B3BB6 (U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00c2;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// RectTransform x = GetComponent<RectTransform>();
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_4 = V_1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_4, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_U3CxU3E5__2_4(L_5);
		// for (int a = 0; a<10; a++)
		__this->set_U3CaU3E5__3_5(0);
		goto IL_00d9;
	}

IL_0039:
	{
		// x.localScale = new Vector3((x.localScale.x * 3f + newSize.x) / 4f, (x.localScale.y * 3f + newSize.y) / 4f, x.localScale.z);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = __this->get_U3CxU3E5__2_4();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_U3CxU3E5__2_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_newSize_3();
		float L_11 = L_10->get_x_2();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = __this->get_U3CxU3E5__2_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_newSize_3();
		float L_16 = L_15->get_y_3();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_17 = __this->get_U3CxU3E5__2_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_9, (float)(3.0f))), (float)L_11))/(float)(4.0f))), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_14, (float)(3.0f))), (float)L_16))/(float)(4.0f))), L_19, /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_20, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.0075f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_21 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_21, (0.00749999983f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_21);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00c2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int a = 0; a<10; a++)
		int32_t L_22 = __this->get_U3CaU3E5__3_5();
		V_2 = L_22;
		int32_t L_23 = V_2;
		__this->set_U3CaU3E5__3_5(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_00d9:
	{
		// for (int a = 0; a<10; a++)
		int32_t L_24 = __this->get_U3CaU3E5__3_5();
		if ((((int32_t)L_24) < ((int32_t)((int32_t)10))))
		{
			goto IL_0039;
		}
	}
	{
		// x.localScale = newSize;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_25 = __this->get_U3CxU3E5__2_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = __this->get_newSize_3();
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_25, L_26, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object InventorySlot/<SizeShift>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSizeShiftU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCD866CC7473C4B050A57B6B7453B0622EDFF4DF5 (U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InventorySlot/<SizeShift>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSizeShiftU3Ed__14_System_Collections_IEnumerator_Reset_m2C5E7867D1B6F5CD8076DE313B0C1F667F49902E (U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSizeShiftU3Ed__14_System_Collections_IEnumerator_Reset_m2C5E7867D1B6F5CD8076DE313B0C1F667F49902E_RuntimeMethod_var)));
	}
}
// System.Object InventorySlot/<SizeShift>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSizeShiftU3Ed__14_System_Collections_IEnumerator_get_Current_m3EA85CFA3F279F868A79CF6AF72E8224F2F2E7CE (U3CSizeShiftU3Ed__14_t4A5A8D867509CB9AC6A808A9174D7FABC9E7611B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void InventorySlot/<SwapItems>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwapItemsU3Ed__10__ctor_m52F4910F04CE1C4AE60D51A3969A32492E4525C3 (U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void InventorySlot/<SwapItems>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwapItemsU3Ed__10_System_IDisposable_Dispose_m7D46B7D01F32CE4A67AE1BE38FED1D8210526866 (U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean InventorySlot/<SwapItems>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwapItemsU3Ed__10_MoveNext_m2762C11A0F05830CC676E3F02AD59E5BA46ABC7D (U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * V_1 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_2 = NULL;
	int32_t V_3 = 0;
	FieldInfo_t * V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_010d;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject par = itemDummy;
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_3 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_itemDummy_8();
		__this->set_U3CparU3E5__2_5(L_4);
		// if (par.gameObject.GetComponent<Item>() == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_U3CparU3E5__2_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_5, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_7;
		L_7 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_6, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00b2;
		}
	}
	{
		// par.AddComponent(item1.GetType());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_U3CparU3E5__2_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_10 = __this->get_item1_3();
		Type_t * L_11;
		L_11 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_10, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_12;
		L_12 = GameObject_AddComponent_mD183856CB5A1CCF1576221D7D6CEBC4092E734B8(L_9, L_11, /*hidden argument*/NULL);
		// System.Reflection.FieldInfo[] fields = item1.GetType().GetFields();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_13 = __this->get_item1_3();
		Type_t * L_14;
		L_14 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_13, /*hidden argument*/NULL);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_15;
		L_15 = Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372(L_14, /*hidden argument*/NULL);
		// foreach (System.Reflection.FieldInfo field in fields)
		V_2 = L_15;
		V_3 = 0;
		goto IL_00ac;
	}

IL_0079:
	{
		// foreach (System.Reflection.FieldInfo field in fields)
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_16 = V_2;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		FieldInfo_t * L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		// field.SetValue(par.GetComponent(item1.GetType()), field.GetValue(item1));
		FieldInfo_t * L_20 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_U3CparU3E5__2_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_22 = __this->get_item1_3();
		Type_t * L_23;
		L_23 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_22, /*hidden argument*/NULL);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_24;
		L_24 = GameObject_GetComponent_mDF0C55D6EE63B6CA0DD45D627AD267004D6EC473(L_21, L_23, /*hidden argument*/NULL);
		FieldInfo_t * L_25 = V_4;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_26 = __this->get_item1_3();
		RuntimeObject * L_27;
		L_27 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(19 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_25, L_26);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_20, L_24, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00ac:
	{
		// foreach (System.Reflection.FieldInfo field in fields)
		int32_t L_29 = V_3;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))))
		{
			goto IL_0079;
		}
	}

IL_00b2:
	{
		// Destroy(item1);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_31 = __this->get_item1_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_31, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_32 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_32, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_32);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// InsertItem(item2);
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_33 = V_1;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_34 = __this->get_item2_4();
		InventorySlot_InsertItem_m987690247A7F0F457BA3F11F46E1F99E85DCD6E4(L_33, L_34, /*hidden argument*/NULL);
		// Destroy(item2);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_35 = __this->get_item2_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_35, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_36 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_36, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_36);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_010d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PushItemToPointer(par.GetComponent<Item>());
		InventorySlot_t5A758FBF76BE1C4E32EF23E92895CB0FCFF817AB * L_37 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_U3CparU3E5__2_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_39;
		L_39 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_38, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		InventorySlot_PushItemToPointer_m5C2DBE8FCD8CDE22811636A3EAF125ABF56FDC00(L_37, L_39, /*hidden argument*/NULL);
		// Destroy(par.GetComponent<Item>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_U3CparU3E5__2_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_41;
		L_41 = GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8(L_40, /*hidden argument*/GameObject_GetComponent_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_mE6ABD1A40FA0FF08216154972343F17D2C7D84F8_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_41, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object InventorySlot/<SwapItems>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwapItemsU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3922A5EE5C1B97A6E26BB7B6CBF1D1CBE5416DED (U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void InventorySlot/<SwapItems>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwapItemsU3Ed__10_System_Collections_IEnumerator_Reset_m2C3054EEDF6AF6C72F641DDFCCE371BC1D3EB25B (U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwapItemsU3Ed__10_System_Collections_IEnumerator_Reset_m2C3054EEDF6AF6C72F641DDFCCE371BC1D3EB25B_RuntimeMethod_var)));
	}
}
// System.Object InventorySlot/<SwapItems>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwapItemsU3Ed__10_System_Collections_IEnumerator_get_Current_m55C956124B4C7BF25A0F3A6E8731FF64F5E44662 (U3CSwapItemsU3Ed__10_t04425718874300FF46AD9E3D347838B495F38B0A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Item/<CoolItemEffectStuffz>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolItemEffectStuffzU3Ed__10__ctor_m87978DE65E11C1681256B7B1472BD13E400BE8BE (U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Item/<CoolItemEffectStuffz>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolItemEffectStuffzU3Ed__10_System_IDisposable_Dispose_mBC0C26C61423DD85EB42C0FB6F43E56000A7370B (U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Item/<CoolItemEffectStuffz>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoolItemEffectStuffzU3Ed__10_MoveNext_m52AE152C2B5DFBE45BAF35AEEF2F9F31AC6C878C (U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0150;
			}
			case 2:
			{
				goto IL_023c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 pos1 = transform.position;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_3 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_U3Cpos1U3E5__2_3(L_5);
		// Vector3 pos2 = new Vector3(pos1.x + .15f, pos1.y + .35f, pos1.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_7 = L_6->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_9 = L_8->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_11 = L_10->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_7, (float)(0.150000006f))), ((float)il2cpp_codegen_add((float)L_9, (float)(0.349999994f))), L_11, /*hidden argument*/NULL);
		__this->set_U3Cpos2U3E5__3_4(L_12);
		// float rot1 = 0;
		__this->set_U3Crot1U3E5__4_5((0.0f));
		// float rot2 = 30;
		__this->set_U3Crot2U3E5__5_6((30.0f));
	}

IL_0088:
	{
		// for(int x = 0; x < 125; x++)
		__this->set_U3CxU3E5__6_7(0);
		goto IL_0167;
	}

IL_0094:
	{
		// transform.position = new Vector3((transform.position.x*99f+pos2.x)/100f, (transform.position.y * 99f + pos2.y) / 100f,pos1.z);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_13 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_15 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of_U3Cpos2U3E5__3_4();
		float L_20 = L_19->get_x_2();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_21 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_U3Cpos2U3E5__3_4();
		float L_26 = L_25->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_28 = L_27->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_18, (float)(99.0f))), (float)L_20))/(float)(100.0f))), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_24, (float)(99.0f))), (float)L_26))/(float)(100.0f))), L_28, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_29, /*hidden argument*/NULL);
		// transform.eulerAngles = new Vector3(0, 0, (rot2 + transform.eulerAngles.z * 99) / 100f);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_30 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_U3Crot2U3E5__5_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_33 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), (0.0f), (0.0f), ((float)((float)((float)il2cpp_codegen_add((float)L_32, (float)((float)il2cpp_codegen_multiply((float)L_36, (float)(99.0f)))))/(float)(100.0f))), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_31, L_37, /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_38 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_38, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_38);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0150:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for(int x = 0; x < 125; x++)
		int32_t L_39 = __this->get_U3CxU3E5__6_7();
		V_2 = L_39;
		int32_t L_40 = V_2;
		__this->set_U3CxU3E5__6_7(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)));
	}

IL_0167:
	{
		// for(int x = 0; x < 125; x++)
		int32_t L_41 = __this->get_U3CxU3E5__6_7();
		if ((((int32_t)L_41) < ((int32_t)((int32_t)125))))
		{
			goto IL_0094;
		}
	}
	{
		// for (int x = 0; x < 125; x++)
		__this->set_U3CxU3E5__6_7(0);
		goto IL_0253;
	}

IL_0180:
	{
		// transform.position = new Vector3((transform.position.x * 99f + pos1.x) / 100f, (transform.position.y * 99f + pos1.y) / 100f, pos1.z);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_42 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_42, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_44 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_48 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_49 = L_48->get_x_2();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_50 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_54 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_55 = L_54->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_56 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_57 = L_56->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_47, (float)(99.0f))), (float)L_49))/(float)(100.0f))), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_53, (float)(99.0f))), (float)L_55))/(float)(100.0f))), L_57, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_58, /*hidden argument*/NULL);
		// transform.eulerAngles = new Vector3(0, 0, (rot1 + transform.eulerAngles.z * 99) / 100f);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_59 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		float L_61 = __this->get_U3Crot1U3E5__4_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_62 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_63, /*hidden argument*/NULL);
		float L_65 = L_64.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_66), (0.0f), (0.0f), ((float)((float)((float)il2cpp_codegen_add((float)L_61, (float)((float)il2cpp_codegen_multiply((float)L_65, (float)(99.0f)))))/(float)(100.0f))), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_60, L_66, /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_67 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_67, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_67);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_023c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 125; x++)
		int32_t L_68 = __this->get_U3CxU3E5__6_7();
		V_2 = L_68;
		int32_t L_69 = V_2;
		__this->set_U3CxU3E5__6_7(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1)));
	}

IL_0253:
	{
		// for (int x = 0; x < 125; x++)
		int32_t L_70 = __this->get_U3CxU3E5__6_7();
		if ((((int32_t)L_70) < ((int32_t)((int32_t)125))))
		{
			goto IL_0180;
		}
	}
	{
		// while (true){
		goto IL_0088;
	}
}
// System.Object Item/<CoolItemEffectStuffz>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoolItemEffectStuffzU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m310F99E2CA01A24CDDBF6227FF922501E1200CBD (U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Item/<CoolItemEffectStuffz>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolItemEffectStuffzU3Ed__10_System_Collections_IEnumerator_Reset_m31F9298A25126FDBEFA43ED20782174ED6C1C0BE (U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoolItemEffectStuffzU3Ed__10_System_Collections_IEnumerator_Reset_m31F9298A25126FDBEFA43ED20782174ED6C1C0BE_RuntimeMethod_var)));
	}
}
// System.Object Item/<CoolItemEffectStuffz>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoolItemEffectStuffzU3Ed__10_System_Collections_IEnumerator_get_Current_m1C4D7B3DA0379834974F4FE7797E5036807F3B30 (U3CCoolItemEffectStuffzU3Ed__10_tC8130AB5B3515448421B609A1803F1E61B4D5269 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Item/<PlayerCollect>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayerCollectU3Ed__7__ctor_mB683E6ADA3D9EE036409141C068C35ACE0634528 (U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Item/<PlayerCollect>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayerCollectU3Ed__7_System_IDisposable_Dispose_mDA44160E9FC55F07679C597DC076A37DF46FD312 (U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Item/<PlayerCollect>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayerCollectU3Ed__7_MoveNext_m44A866350627361BECA07ADD274DDBE1E42E288E (U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00cc;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 x = player.transform.position;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_4 = V_1;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_5 = L_4->get_player_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_U3CxU3E5__2_3(L_7);
		// for (int y = 0; y < 10; y++)
		__this->set_U3CyU3E5__3_4(0);
		goto IL_00e3;
	}

IL_0043:
	{
		// transform.position = new Vector3((transform.position.x * 9f + x.x) / 10f, (transform.position.y * 9f + x.y) / 10f, transform.position.z);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_8 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_10 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_14 = __this->get_address_of_U3CxU3E5__2_3();
		float L_15 = L_14->get_x_2();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_16 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_20 = __this->get_address_of_U3CxU3E5__2_3();
		float L_21 = L_20->get_y_3();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_22 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = L_24.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_13, (float)(9.0f))), (float)L_15))/(float)(10.0f))), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_19, (float)(9.0f))), (float)L_21))/(float)(10.0f))), L_25, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_9, L_26, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.01f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_27 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_27, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00cc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int y = 0; y < 10; y++)
		int32_t L_28 = __this->get_U3CyU3E5__3_4();
		V_2 = L_28;
		int32_t L_29 = V_2;
		__this->set_U3CyU3E5__3_4(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
	}

IL_00e3:
	{
		// for (int y = 0; y < 10; y++)
		int32_t L_30 = __this->get_U3CyU3E5__3_4();
		if ((((int32_t)L_30) < ((int32_t)((int32_t)10))))
		{
			goto IL_0043;
		}
	}
	{
		// if (player != null)
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_31 = V_1;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_32 = L_31->get_player_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_32, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_011c;
		}
	}
	{
		// a = player.GetComponent<Player>().CollectItem(this);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_34 = V_1;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_35 = L_34->get_player_7();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_36;
		L_36 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_35, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_37 = V_1;
		bool L_38;
		L_38 = Player_CollectItem_m4674973FA78A10981C3CB392360C44E4F79ED839(L_36, L_37, /*hidden argument*/NULL);
		// if (a)
		if (!L_38)
		{
			goto IL_011c;
		}
	}
	{
		// Destroy(gameObject);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_39 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_40, /*hidden argument*/NULL);
	}

IL_011c:
	{
		// }
		return (bool)0;
	}
}
// System.Object Item/<PlayerCollect>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayerCollectU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC007BD606AB3F7C060CD7B714F165667A2BDEA57 (U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Item/<PlayerCollect>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayerCollectU3Ed__7_System_Collections_IEnumerator_Reset_mAC6BF8598C2F116814C2A2E7247AE92FBE656004 (U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayerCollectU3Ed__7_System_Collections_IEnumerator_Reset_mAC6BF8598C2F116814C2A2E7247AE92FBE656004_RuntimeMethod_var)));
	}
}
// System.Object Item/<PlayerCollect>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlayerCollectU3Ed__7_System_Collections_IEnumerator_get_Current_m86FFBDDEB7764514834023AFB7C3547F570C9323 (U3CPlayerCollectU3Ed__7_tB1E2CDE4A7F04922F9289F3AF278C681E9216791 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolItemEffectStuffzU3Ed__1__ctor_m1DF1E76C2F1162271EE3AB972C8F4405BE8870EE (U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolItemEffectStuffzU3Ed__1_System_IDisposable_Dispose_mC39CCDCCF35D18C44499EBD321AD1DBD5FAC0CD1 (U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoolItemEffectStuffzU3Ed__1_MoveNext_m0FF0EBD0280D025689F2B0CB04649116726AE427 (U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0150;
			}
			case 2:
			{
				goto IL_023c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Vector3 pos1 = transform.position;
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_3 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		__this->set_U3Cpos1U3E5__2_3(L_5);
		// Vector3 pos2 = new Vector3(pos1.x + .15f, pos1.y + .35f, pos1.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_6 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_7 = L_6->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_9 = L_8->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_11 = L_10->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_7, (float)(0.150000006f))), ((float)il2cpp_codegen_add((float)L_9, (float)(0.349999994f))), L_11, /*hidden argument*/NULL);
		__this->set_U3Cpos2U3E5__3_4(L_12);
		// float rot1 = 0;
		__this->set_U3Crot1U3E5__4_5((0.0f));
		// float rot2 = 30;
		__this->set_U3Crot2U3E5__5_6((30.0f));
	}

IL_0088:
	{
		// for (int x = 0; x < 125; x++)
		__this->set_U3CxU3E5__6_7(0);
		goto IL_0167;
	}

IL_0094:
	{
		// transform.position = new Vector3((transform.position.x * 99f + pos2.x) / 100f, (transform.position.y * 99f + pos2.y) / 100f, pos1.z);
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_13 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_13, /*hidden argument*/NULL);
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_15 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_19 = __this->get_address_of_U3Cpos2U3E5__3_4();
		float L_20 = L_19->get_x_2();
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_21 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_25 = __this->get_address_of_U3Cpos2U3E5__3_4();
		float L_26 = L_25->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_28 = L_27->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_18, (float)(99.0f))), (float)L_20))/(float)(100.0f))), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_24, (float)(99.0f))), (float)L_26))/(float)(100.0f))), L_28, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_29, /*hidden argument*/NULL);
		// transform.eulerAngles = new Vector3(0, 0, (rot2 + transform.eulerAngles.z * 99) / 100f);
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_30 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		float L_32 = __this->get_U3Crot2U3E5__5_6();
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_33 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_34, /*hidden argument*/NULL);
		float L_36 = L_35.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), (0.0f), (0.0f), ((float)((float)((float)il2cpp_codegen_add((float)L_32, (float)((float)il2cpp_codegen_multiply((float)L_36, (float)(99.0f)))))/(float)(100.0f))), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_31, L_37, /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_38 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_38, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_38);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0150:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 125; x++)
		int32_t L_39 = __this->get_U3CxU3E5__6_7();
		V_2 = L_39;
		int32_t L_40 = V_2;
		__this->set_U3CxU3E5__6_7(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)));
	}

IL_0167:
	{
		// for (int x = 0; x < 125; x++)
		int32_t L_41 = __this->get_U3CxU3E5__6_7();
		if ((((int32_t)L_41) < ((int32_t)((int32_t)125))))
		{
			goto IL_0094;
		}
	}
	{
		// for (int x = 0; x < 125; x++)
		__this->set_U3CxU3E5__6_7(0);
		goto IL_0253;
	}

IL_0180:
	{
		// transform.position = new Vector3((transform.position.x * 99f + pos1.x) / 100f, (transform.position.y * 99f + pos1.y) / 100f, pos1.z);
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_42 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_42, /*hidden argument*/NULL);
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_44 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_48 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_49 = L_48->get_x_2();
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_50 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_50, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		float L_53 = L_52.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_54 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_55 = L_54->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_56 = __this->get_address_of_U3Cpos1U3E5__2_3();
		float L_57 = L_56->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_58), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_47, (float)(99.0f))), (float)L_49))/(float)(100.0f))), ((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_53, (float)(99.0f))), (float)L_55))/(float)(100.0f))), L_57, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_43, L_58, /*hidden argument*/NULL);
		// transform.eulerAngles = new Vector3(0, 0, (rot1 + transform.eulerAngles.z * 99) / 100f);
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_59 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		float L_61 = __this->get_U3Crot1U3E5__4_5();
		ItemObjectCoolEffect_tC61A8E474A3AAE9D491260E982555329612CC855 * L_62 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_62, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_63, /*hidden argument*/NULL);
		float L_65 = L_64.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_66), (0.0f), (0.0f), ((float)((float)((float)il2cpp_codegen_add((float)L_61, (float)((float)il2cpp_codegen_multiply((float)L_65, (float)(99.0f)))))/(float)(100.0f))), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_60, L_66, /*hidden argument*/NULL);
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 * L_67 = (WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t082FDFEAAFF92937632C357C39E55C84B8FD06D4_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_mEA41FB4A9236A64D566330BBE25F9902DEBB2EEA(L_67, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_67);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_023c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int x = 0; x < 125; x++)
		int32_t L_68 = __this->get_U3CxU3E5__6_7();
		V_2 = L_68;
		int32_t L_69 = V_2;
		__this->set_U3CxU3E5__6_7(((int32_t)il2cpp_codegen_add((int32_t)L_69, (int32_t)1)));
	}

IL_0253:
	{
		// for (int x = 0; x < 125; x++)
		int32_t L_70 = __this->get_U3CxU3E5__6_7();
		if ((((int32_t)L_70) < ((int32_t)((int32_t)125))))
		{
			goto IL_0180;
		}
	}
	{
		// while (true)
		goto IL_0088;
	}
}
// System.Object ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoolItemEffectStuffzU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m636BD91A9AF270BA5BE58C4E06EF1320EFD99E49 (U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoolItemEffectStuffzU3Ed__1_System_Collections_IEnumerator_Reset_m85D614A17C7C5CD6DAE43020EA81308B8E61A17C (U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoolItemEffectStuffzU3Ed__1_System_Collections_IEnumerator_Reset_m85D614A17C7C5CD6DAE43020EA81308B8E61A17C_RuntimeMethod_var)));
	}
}
// System.Object ItemObjectCoolEffect/<CoolItemEffectStuffz>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCoolItemEffectStuffzU3Ed__1_System_Collections_IEnumerator_get_Current_m333CD2B6643C6EB5038BED3A0E574CA498578C96 (U3CCoolItemEffectStuffzU3Ed__1_tB8901DB1C543E214734BF25B41C60333408C35B1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player/<RegenerateHealth>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegenerateHealthU3Ed__12__ctor_m03ADDC4E6B0C96BCB18CCDAAF82F39762A6C01E6 (U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player/<RegenerateHealth>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegenerateHealthU3Ed__12_System_IDisposable_Dispose_m0DD18355F62B1D2142DA30C909297CD334F90926 (U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player/<RegenerateHealth>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRegenerateHealthU3Ed__12_MoveNext_mFE3FE7D30495AC83696CF024CAE951B6CDCF7600 (U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_006f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0076;
	}

IL_004b:
	{
		// Heal(.05f);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = V_1;
		Entity_Heal_mF3F3A0C2E3C2F5D61EF8EDCD4A7A16DC51643108(L_4, (0.0500000007f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(.05f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (0.0500000007f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_006f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0076:
	{
		// while (health < maxHealth)
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6 = V_1;
		float L_7 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_6)->get_health_4();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_8 = V_1;
		float L_9 = ((Entity_t044863A7B37E4AD27CE78D4B680109A139080095 *)L_8)->get_maxHealth_5();
		if ((((float)L_7) < ((float)L_9)))
		{
			goto IL_004b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Player/<RegenerateHealth>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegenerateHealthU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0B247E58AC1A812CEF2F38599126EDB3E50CCDC (U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player/<RegenerateHealth>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRegenerateHealthU3Ed__12_System_Collections_IEnumerator_Reset_m4B905EE4AF3E3F7954EA1F6B11812F68B06DA62E (U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRegenerateHealthU3Ed__12_System_Collections_IEnumerator_Reset_m4B905EE4AF3E3F7954EA1F6B11812F68B06DA62E_RuntimeMethod_var)));
	}
}
// System.Object Player/<RegenerateHealth>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRegenerateHealthU3Ed__12_System_Collections_IEnumerator_get_Current_m0BD04D8A0F7946CB8F30D7D158A196B2841533D7 (U3CRegenerateHealthU3Ed__12_tDA6E95217368323F6E9FED3B154BCCA0722898A7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player/<StartEndGame>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartEndGameU3Ed__10__ctor_m5FD5D1F6F448DA1D4E3FB790CDCD7B11BE55737B (U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player/<StartEndGame>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartEndGameU3Ed__10_System_IDisposable_Dispose_mE882879711A5DC986FFD13FC42B13CD0028AB655 (U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player/<StartEndGame>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartEndGameU3Ed__10_MoveNext_m6A66F13F84B71779D27498E1C96F48CDD20B0D0E (U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4D6860B76928498777DED120D3B401E9055DA61);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// gameOverText.text = "You Won!";
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_gameOverText_21();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralC4D6860B76928498777DED120D3B401E9055DA61);
		// yield return new WaitForSeconds(6);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (6.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0047:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PM.DeathScreen();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_7 = V_1;
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_8 = L_7->get_PM_17();
		PauseMenu_DeathScreen_m6949C40F992F4FB2BCF9BFD5FAAECEAC9630D73B(L_8, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Player/<StartEndGame>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartEndGameU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC9EBE9E219018648531BD8E6493C15B373BF034F (U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player/<StartEndGame>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartEndGameU3Ed__10_System_Collections_IEnumerator_Reset_mAE31217E31F914CA8122BF1CFAF78314F2401C86 (U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartEndGameU3Ed__10_System_Collections_IEnumerator_Reset_mAE31217E31F914CA8122BF1CFAF78314F2401C86_RuntimeMethod_var)));
	}
}
// System.Object Player/<StartEndGame>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartEndGameU3Ed__10_System_Collections_IEnumerator_get_Current_m87EEEA493446CACB818AFFC6E7B363F6E3007B34 (U3CStartEndGameU3Ed__10_t0C7F8CEF4591F42B3FA0AE5C6B542142E5B81117 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TempDialogue/<DialogueLoop>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDialogueLoopU3Ed__12__ctor_mAB3DB36850E10AD69F83D3CB00ACA111E56D9932 (U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TempDialogue/<DialogueLoop>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDialogueLoopU3Ed__12_System_IDisposable_Dispose_mD2A2A9908AD72645AE61E5EC708C2155C0D0E5C9 (U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TempDialogue/<DialogueLoop>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDialogueLoopU3Ed__12_MoveNext_mE4EA391A0C2D31882A0577AC593EE77A510509E0 (U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_008c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// foreach(string s in dialogue){
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = __this->get_dialogue_2();
		__this->set_U3CU3E7__wrap1_4(L_4);
		__this->set_U3CU3E7__wrap2_5(0);
		goto IL_00a1;
	}

IL_005e:
	{
		// foreach(string s in dialogue){
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = __this->get_U3CU3E7__wrap1_4();
		int32_t L_6 = __this->get_U3CU3E7__wrap2_5();
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// PlugDialogue(s);
		TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * L_9 = V_1;
		String_t* L_10 = V_2;
		TempDialogue_PlugDialogue_mBE17240C7B4D319F9E2504E90F0F676C5D564260(L_9, L_10, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(5);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_008c:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_12 = __this->get_U3CU3E7__wrap2_5();
		__this->set_U3CU3E7__wrap2_5(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_00a1:
	{
		// foreach(string s in dialogue){
		int32_t L_13 = __this->get_U3CU3E7__wrap2_5();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = __this->get_U3CU3E7__wrap1_4();
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_005e;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_4((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL);
		// introComplete = true;
		TempDialogue_t2D3BF3D26524DD04BBFAF385EB674E2868038BC5 * L_15 = V_1;
		L_15->set_introComplete_13((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object TempDialogue/<DialogueLoop>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDialogueLoopU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m131183C76AEBEE506356AC05D955AD78D351E1DC (U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TempDialogue/<DialogueLoop>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDialogueLoopU3Ed__12_System_Collections_IEnumerator_Reset_m5F7B63FD5D944D28006170AB98B89ED4965CE854 (U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDialogueLoopU3Ed__12_System_Collections_IEnumerator_Reset_m5F7B63FD5D944D28006170AB98B89ED4965CE854_RuntimeMethod_var)));
	}
}
// System.Object TempDialogue/<DialogueLoop>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDialogueLoopU3Ed__12_System_Collections_IEnumerator_get_Current_mEBB787E036DD7712C861839660AA2AD7915BA7D1 (U3CDialogueLoopU3Ed__12_t0CC115D65DE90139B3711B9EDD9445D5869BB0D1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
