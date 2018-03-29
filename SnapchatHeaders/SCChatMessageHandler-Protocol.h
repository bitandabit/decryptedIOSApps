//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol SCChatMessage, SCChatMessageRenderer;

@protocol SCChatMessageHandler
+ (long long)shouldShowSender;
+ (long long)shouldShowDate;
+ (long long)shouldShowTimestamp;
+ (_Bool)shouldShowActionMenu;
+ (_Bool)shouldShowSenderLine;
+ (_Bool)isSavable;
+ (_Bool)isStackable;
+ (NSString *)type;
+ (Class)rendererClass;
+ (id <SCChatMessageRenderer>)createRendererWithMessage:(id <SCChatMessage>)arg1;
@end
