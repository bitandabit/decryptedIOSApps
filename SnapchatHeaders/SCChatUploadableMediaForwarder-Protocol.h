//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChatForwardable-Protocol.h"

@class NSArray, NSString, SCBaseUploadableChatMedia;

@protocol SCChatUploadableMediaForwarder <SCChatForwardable>
- (void)forwardMedia:(SCBaseUploadableChatMedia *)arg1 toRecipients:(NSArray *)arg2 mischefs:(NSArray *)arg3 additionalText:(NSString *)arg4;
- (SCBaseUploadableChatMedia *)prepareMediaToUpload;
@end
