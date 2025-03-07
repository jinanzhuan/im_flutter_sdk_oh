//
//  ChatTypedef.h
//  Pods
//
//  Created by 杜洁鹏 on 2024/12/25.
//


//#define AgoraChat

#if defined(AgoraChat)

#import <AgoraChat/AgoraChat.h>
#import <AgoraChat/AgoraChatOptions+PrivateDeploy.h>

#define EMClient AgoraChatClient


#define EMOptions AgoraChatOptions
#define EMChatMessage AgoraChatMessage
#define EMDeviceConfig AgoraChatDeviceConfig
#define EMPresence AgoraChatPresence
#define EMMessageBody AgoraChatMessageBody
#define EMTextMessageBody AgoraChatTextMessageBody
#define EMFileMessageBody AgoraChatFileMessageBody
#define EMCmdMessageBody AgoraChatCmdMessageBody
#define EMCustomMessageBody AgoraChatCustomMessageBody
#define EMCombineMessageBody AgoraChatCombineMessageBody
#define EMVoiceMessageBody AgoraChatVoiceMessageBody
#define EMImageMessageBody AgoraChatImageMessageBody
#define EMVideoMessageBody AgoraChatVideoMessageBody
#define EMLocationMessageBody AgoraChatLocationMessageBody

#define EMMessageBodyType AgoraChatMessageBodyType
#define EMMessageBodyTypeText AgoraChatMessageBodyTypeText
#define EMMessageBodyTypeImage AgoraChatMessageBodyTypeImage
#define EMMessageBodyTypeFile AgoraChatMessageBodyTypeFile
#define EMMessageBodyTypeVoice AgoraChatMessageBodyTypeVoice
#define EMMessageBodyTypeVideo AgoraChatMessageBodyTypeVideo
#define EMMessageBodyTypeLocation AgoraChatMessageBodyTypeLocation
#define EMMessageBodyTypeCmd AgoraChatMessageBodyTypeCmd
#define EMMessageBodyTypeCustom AgoraChatMessageBodyTypeCustom
#define EMMessageBodyTypeCombine AgoraChatMessageBodyTypeCombine


#define EMSilentModeTime AgoraChatSilentModeTime
#define EMSilentModeParam AgoraChatSilentModeParam
#define EMSilentModeResult AgoraChatSilentModeResult

#define EMChatroom AgoraChatroom
#define EMCursorResult AgoraChatCursorResult
#define EMPageResult AgoraChatPageResult

#define EMRecallMessageInfo AgoraChatRecallMessageInfo
#define EMTranslateLanguage AgoraChatTranslateLanguage
#define EMUserInfo AgoraChatUserInfo
#define EMChatThread AgoraChatThread
#define EMChatThreadEvent AgoraChatThreadEvent
#define EMThreadManagerDelegate AgoraChatThreadManagerDelegate
#define EMLoginExtensionInfo AgoraChatLoginExtensionInfo

#define EMDownloadStatus AgoraChatDownloadStatus
#define EMDownloadStatusFailed AgoraChatDownloadStatusFailed
#define EMDownloadStatusSucceed AgoraChatDownloadStatusSucceed
#define EMDownloadStatusDownloading AgoraChatDownloadStatusDownloading

#define EMChatroomPermissionType AgoraChatroomPermissionType
#define EMChatroomPermissionTypeMember AgoraChatroomPermissionTypeMember
#define EMChatroomPermissionTypeAdmin AgoraChatroomPermissionTypeAdmin
#define EMChatroomPermissionTypeOwner AgoraChatroomPermissionTypeOwner
#define EMChatroomPermissionTypeNone AgoraChatroomPermissionTypeNone

#define EMChatType AgoraChatType
#define EMChatTypeGroupChat AgoraChatTypeGroupChat
#define EMPushRemindType AgoraChatPushRemindType
#define EMMessageReactionOperation AgoraChatMessageReactionOperation

#define EMConversationType AgoraChatConversationType
#define EMConversationTypeGroupChat AgoraChatConversationTypeGroupChat
#define EMConversationTypeChatRoom AgoraChatConversationTypeChatRoom

#define EMSilentModeParamType AgoraChatSilentModeParamType
#define EMSilentModeParamTypeRemindType AgoraChatSilentModeParamTypeRemindType
#define EMSilentModeParamTypeDuration AgoraChatSilentModeParamTypeDuration
#define EMSilentModeParamTypeInterval AgoraChatSilentModeParamTypeInterval
#define EMPushRemindTypeAll AgoraChatPushRemindTypeAll
#define EMPushRemindTypeMentionOnly AgoraChatPushRemindTypeMentionOnly
#define EMPushRemindTypeNone AgoraChatPushRemindTypeNone


#define EMMessageReaction AgoraChatMessageReaction
#define EMMessageReactionChange AgoraChatMessageReactionChange
#define EMGroupPermissionType AgoraChatGroupPermissionType
#define EMGroupPermissionTypeMember AgoraChatGroupPermissionTypeMember
#define EMGroupPermissionTypeAdmin AgoraChatGroupPermissionTypeAdmin
#define EMGroupPermissionTypeOwner AgoraChatGroupPermissionTypeOwner
#define EMGroupPermissionTypeNone AgoraChatGroupPermissionTypeNone

#define EMMessageSearchDirection AgoraChatMessageSearchDirection

#define EMGroupStylePrivateOnlyOwnerInvite AgoraChatGroupStylePrivateOnlyOwnerInvite
#define EMGroupStylePrivateMemberCanInvite AgoraChatGroupStylePrivateMemberCanInvite
#define EMGroupStylePublicJoinNeedApproval AgoraChatGroupStylePublicJoinNeedApproval
#define EMGroupStylePublicOpenJoin AgoraChatGroupStylePublicOpenJoin

#define EMPresenceManagerDelegate AgoraChatPresenceManagerDelegate
#define EMConversation AgoraChatConversation
#define EMPresenceStatusDetail AgoraChatPresenceStatusDetail

#define EMContact AgoraChatContact
#define EMMessagePinInfo AgoraChatMessagePinInfo
#define EMMessagePinOperation AgoraChatMessagePinOperation
#define EMGroup AgoraChatGroup
#define EMGroupOptions AgoraChatGroupOptions
#define EMGroupSharedFile AgoraChatGroupSharedFile 
#define EMConversationFilter AgoraChatConversationFilter
#define EMPushOptions AgoraChatPushOptions

#define EMChatroomBeKickedReason AgoraChatroomBeKickedReason
#define EMChatroomBeKickedReasonDestroyed AgoraChatroomBeKickedReasonDestroyed
#define EMChatroomBeKickedReasonBeRemoved AgoraChatroomBeKickedReasonBeRemoved
#define EMPushDisplayStyleSimpleBanner AgoraChatPushDisplayStyleSimpleBanner

#define EMMessageStatus AgoraChatMessageStatus
#define EMMessageDirection AgoraChatMessageDirection

#define EMContactManagerDelegate AgoraChatContactManagerDelegate
#define EMChatroomManagerDelegate AgoraChatroomManagerDelegate

#define EMMessageSearchScope AgoraChatMessageSearchScope
#define EMMessageReactionOperate AgoraChatMessageReactionOperate
#define EMThreadOperation AgoraChatThreadOperation

#define EMMarkType AgoraChatMarkType

#define EMChatManagerDelegate AgoraChatManagerDelegate
#define EMPushDisplayStyle AgoraChatPushDisplayStyle
#define EMGroupStyle AgoraChatGroupStyle
#define EMGroupMessageAck AgoraChatGroupMessageAck
#define EMUserInfoType AgoraChatUserInfoType
#define EMUserInfoTypeNickName AgoraChatUserInfoTypeNickName
#define EMUserInfoTypeAvatarURL AgoraChatUserInfoTypeAvatarURL
#define EMUserInfoTypePhone AgoraChatUserInfoTypePhone
#define EMUserInfoTypeMail AgoraChatUserInfoTypeMail
#define EMUserInfoTypeGender AgoraChatUserInfoTypeGender
#define EMUserInfoTypeSign AgoraChatUserInfoTypeSign
#define EMUserInfoTypeBirth AgoraChatUserInfoTypeBirth
#define EMUserInfoTypeExt AgoraChatUserInfoTypeExt

#define EMFetchServerMessagesOption AgoraChatFetchServerMessagesOption
#define EMMessageFetchHistoryDirection AgoraChatMessageFetchHistoryDirection
#define EMMessageFetchHistoryDirectionUp AgoraChatMessageFetchHistoryDirectionUp
#define EMMessageFetchHistoryDirectionDown AgoraChatMessageFetchHistoryDirectionDown

#define EMGroupManagerDelegate AgoraChatGroupManagerDelegate
#define EMGroupLeaveReasonBeRemoved AgoraChatGroupLeaveReasonBeRemoved
#define EMGroupLeaveReasonDestroyed AgoraChatGroupLeaveReasonDestroyed
#define EMGroupLeaveReason AgoraChatGroupLeaveReason

#define EMError AgoraChatError
#define EMErrorCode AgoraChatErrorCode
#define EMErrorServerServingForbidden AgoraChatErrorServerServingForbidden
#define EMErrorUserNotLogin AgoraChatErrorUserNotLogin
#define EMErrorServerServingForbidden AgoraChatErrorServerServingForbidden
#define EMErrorAppActiveNumbersReachLimitation AgoraChatErrorAppActiveNumbersReachLimitation
#define EMErrorUserKickedByChangePassword AgoraChatErrorUserKickedByChangePassword
#define EMErrorUserLoginTooManyDevices AgoraChatErrorUserLoginTooManyDevices
#define EMErrorUserKickedByOtherDevice AgoraChatErrorUserKickedByOtherDevice
#define EMErrorUserAuthenticationFailed AgoraChatErrorUserAuthenticationFailed
#define EMErrorMessageInvalid AgoraChatErrorMessageInvalid
#define EMErrorInvalidParam AgoraChatErrorInvalidParam

#define EMClientDelegate AgoraChatClientDelegate
#define EMMultiDevicesDelegate AgoraChatMultiDevicesDelegate

#define EMConnectionState AgoraChatConnectionState
#define EMConnectionConnected AgoraChatConnectionConnected

#define EMMultiDevicesEvent AgoraChatMultiDevicesEvent

#else

#import <HyphenateChat/HyphenateChat.h>
#import <HyphenateChat/EMOptions+PrivateDeploy.h>

#endif

