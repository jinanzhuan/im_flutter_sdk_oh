//
//  EMOptions+Flutter.m
//  im_flutter_sdk
//
//  Created by 杜洁鹏 on 2020/10/12.
//

#import "OptionsHelper.h"
#import "ChatHeaders.h"

@implementation EMOptions (Helper)
- (NSDictionary *)toJson {
    NSMutableDictionary *data = [NSMutableDictionary dictionary];
    data[@"appKey"] = self.appkey;
    data[@"autoLogin"] = @(self.isAutoLogin);
    data[@"debugModel"] = @(self.enableConsoleLog);
    data[@"requireAck"] = @(self.enableRequireReadAck);
    data[@"requireDeliveryAck"] = @(self.enableDeliveryAck);
    data[@"sortMessageByServerTime"] = @(self.sortMessageByServerTime);
    data[@"acceptInvitationAlways"] = @(self.autoAcceptFriendInvitation);
    data[@"autoAcceptGroupInvitation"] = @(self.autoAcceptGroupInvitation);
    data[@"deleteMessagesAsExitGroup"] = @(self.deleteMessagesOnLeaveGroup);
    data[@"deleteMessagesAsExitChatRoom"] = @(self.deleteMessagesOnLeaveChatroom);
    data[@"isAutoDownload"] = @(self.autoDownloadThumbnail);
    data[@"isChatRoomOwnerLeaveAllowed"] = @(self.canChatroomOwnerLeave);
    data[@"serverTransfer"] = @(self.isAutoTransferMessageAttachments);
    data[@"loadEmptyConversations"] = @(self.loadEmptyConversations);
    data[@"usingHttpsOnly"] = @(self.usingHttpsOnly);
    data[@"pushConfig"] = @{@"pushConfig": @{@"apnsCertName": self.apnsCertName}};
    data[@"enableDNSConfig"] = @(self.enableDnsConfig);
    data[@"imPort"] = @(self.chatPort);
    data[@"imServer"] = self.chatServer;
    data[@"restServer"] = self.restServer;
    data[@"dnsUrl"] = self.dnsURL;
    data[@"areaCode"] = @(self.area);
    data[@"deviceName"] = self.customDeviceName;
    data[@"osType"] = @(self.customOSType);
    // 450
    data[@"useReplacedMessageContents"] = @(self.useReplacedMessageContents);
    data[@"enableTLS"] = @(self.enableTLSConnection);
    data[@"messagesReceiveCallbackIncludeSend"] = @(self.includeSendMessageInMessageListener);
    data[@"regardImportMessagesAsRead"] = @(self.regardImportMessagesAsRead);
    // 481
    data[@"loginExtensionInfo"] = self.loginExtensionInfo;
    return data;
}
+ (EMOptions *)fromJson:(NSDictionary *)aJson {
    EMOptions *options = nil;
    if(aJson[@"appKey"] != nil) {
        options = [EMOptions optionsWithAppkey:aJson[@"appKey"]];
    }else {
#if defined(AgoraChat)
        // shengwang
        options = [EMOptions optionsWithAppId:aJson[@"appId"]];
#endif
    }
    options.isAutoLogin = [aJson[@"autoLogin"] boolValue];
    options.enableConsoleLog = YES;// [aJson[@"debugModel"] boolValue];
    options.enableRequireReadAck = [aJson[@"requireAck"] boolValue];
    options.enableDeliveryAck = [aJson[@"requireDeliveryAck"] boolValue];
    options.sortMessageByServerTime = [aJson[@"sortMessageByServerTime"] boolValue];
    options.autoAcceptFriendInvitation = [aJson[@"acceptInvitationAlways"] boolValue];
    options.autoAcceptGroupInvitation = [aJson[@"autoAcceptGroupInvitation"] boolValue];
    options.deleteMessagesOnLeaveGroup = [aJson[@"deleteMessagesAsExitGroup"] boolValue];
    options.deleteMessagesOnLeaveChatroom = [aJson[@"deleteMessagesAsExitChatRoom"] boolValue];
    options.autoDownloadThumbnail = [aJson[@"isAutoDownload"] boolValue];
    options.canChatroomOwnerLeave = [aJson[@"isChatRoomOwnerLeaveAllowed"] boolValue];
    options.isAutoTransferMessageAttachments = [aJson[@"serverTransfer"] boolValue];
    options.loadEmptyConversations = [aJson[@"loadEmptyConversations"] boolValue];
    options.usingHttpsOnly = [aJson[@"usingHttpsOnly"] boolValue];
    options.apnsCertName = aJson[@"pushConfig"][@"apnsCertName"];
    options.enableDnsConfig = [aJson[@"enableDNSConfig"] boolValue];
    options.chatPort = [aJson[@"imPort"] intValue];
    options.chatServer = aJson[@"imServer"];
    options.restServer = aJson[@"restServer"];
    options.dnsURL = aJson[@"dnsURL"];
    options.area = [aJson[@"areaCode"] intValue];
    options.customDeviceName = aJson[@"deviceName"];
    // 450
    options.enableTLSConnection = [aJson[@"enableTLS"] boolValue];
    options.useReplacedMessageContents = [aJson[@"useReplacedMessageContents"] boolValue];
    options.includeSendMessageInMessageListener = [aJson[@"messagesReceiveCallbackIncludeSend"] boolValue];
    options.regardImportMessagesAsRead = [aJson[@"regardImportMessagesAsRead"] boolValue];
    
    if(aJson[@"osType"]) {
        options.customOSType = [aJson[@"osType"] intValue];
    }
    
    // 481
    options.loginExtensionInfo = aJson[@"loginExtensionInfo"];
    
    // 4.10
    options.workPathCopiable = [aJson[@"workPathCopiable"] boolValue];
    return options;
}
@end
