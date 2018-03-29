//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SCStoryManifest, SCStoryMediaMessageViewModel;

@interface SCBaseStoryMediaCardViewModel : NSObject
{
    _Bool _sentByUser;
    _Bool _isSent;
    _Bool _isSending;
    _Bool _failedToSend;
    NSString *_messageId;
    NSString *_conversationId;
    SCStoryManifest *_storyManifest;
    SCStoryMediaMessageViewModel *_mediaViewModel;
}

+ (id)_subtitleSendingColor;
+ (id)_titleSendingColor;
+ (id)_failedColor;
+ (id)_subtitleColor;
+ (id)_titleColor;
+ (id)subtitleFont;
+ (id)titleFont;
@property(readonly, nonatomic) SCStoryMediaMessageViewModel *mediaViewModel; // @synthesize mediaViewModel=_mediaViewModel;
@property(readonly, nonatomic) SCStoryManifest *storyManifest; // @synthesize storyManifest=_storyManifest;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) _Bool failedToSend; // @synthesize failedToSend=_failedToSend;
@property(readonly, nonatomic) _Bool isSending; // @synthesize isSending=_isSending;
@property(readonly, nonatomic) _Bool isSent; // @synthesize isSent=_isSent;
@property(readonly, nonatomic) _Bool sentByUser; // @synthesize sentByUser=_sentByUser;
- (void).cxx_destruct;
- (id)colorForSubtitle;
- (id)colorForTitle;
- (id)attributedTextForSubtitle;
- (id)attributedTextForTitle;
- (double)height;
- (id)initWithMediaMessageV3:(id)arg1 mediaViewModel:(id)arg2 currentUserName:(id)arg3;
- (id)initWithBaseMediaMessage:(id)arg1 mediaViewModel:(id)arg2;

@end

