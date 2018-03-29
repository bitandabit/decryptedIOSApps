//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGListDiffable-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString, SCFeedItem;

@protocol SCFeedCellViewModel <NSObject, IGListDiffable>
@property(readonly, nonatomic) SCFeedItem *feedItem;
- (_Bool)shouldDisableFeedSwiping;
- (_Bool)isGroupConversation;
- (_Bool)hasUnreadMessages;
- (_Bool)hasFailedMessages;
- (double)height;
- (NSString *)identifier;
- (NSString *)reusableCellIdentifier;
@end
