//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCBaseMessageFactory : NSObject
{
}

+ (id)lastBaseMessageFromLastChatAction:(id)arg1 bodyType:(long long)arg2 username:(id)arg3 recipient:(id)arg4 write:(_Bool)arg5;
+ (long long)_mediaTypeFromSCChatMessageMediaType:(long long)arg1;
+ (id)_createDiscoverMediaMessageFromMediaProvider:(id)arg1 sender:(id)arg2 recipient:(id)arg3 messageMetadata:(id)arg4;
+ (id)_createAdShareMediaMessageFromMediaProvider:(id)arg1 sender:(id)arg2 recipient:(id)arg3 messageMetadata:(id)arg4;
+ (id)_createSnapchatterMessageFromSender:(id)arg1 recipient:(id)arg2 messageMetadata:(id)arg3;
+ (id)_createKhaleesiMessageFromSender:(id)arg1 sender:(id)arg2 recipient:(id)arg3 messageMetadata:(id)arg4;
+ (id)_createSearchDynamicStoriesShareMessageFromSender:(id)arg1 recipient:(id)arg2 messageMetadata:(id)arg3;
+ (id)_createDeeplinkTextMessageFromSender:(id)arg1 recipient:(id)arg2 messageMetadata:(id)arg3;
+ (id)_createSearchShareMessageFromSender:(id)arg1 recipient:(id)arg2 messageMetadata:(id)arg3;
+ (id)_createMapShareMessageFromSender:(id)arg1 recipient:(id)arg2 messageMetadata:(id)arg3;
+ (id)_createStoryShareMessageFromSender:(id)arg1 recipient:(id)arg2 messageMetadata:(id)arg3;
+ (id)_createStoryMediaMessageFromMediaProvider:(id)arg1 sender:(id)arg2 recipient:(id)arg3 messageMetadata:(id)arg4;
+ (id)_createBatchedMediaMessageFromMediaProvider:(id)arg1 sender:(id)arg2 recipient:(id)arg3;
+ (id)_createBaseChatMediaWithMediaProvider:(id)arg1 messageStateDelegate:(id)arg2;
+ (id)_createMediaListWithMediaProviders:(id)arg1 messageStateDelegate:(id)arg2;
+ (id)_createChatMediaMessageFromMediaProvider:(id)arg1 sender:(id)arg2 recipient:(id)arg3;
+ (id)createMessageWithRecipientUsername:(id)arg1 uploadedMediaProviders:(id)arg2 messageMetadata:(id)arg3;

@end

