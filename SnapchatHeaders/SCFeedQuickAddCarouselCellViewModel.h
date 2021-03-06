//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCFeedCellViewModel-Protocol.h"

@class NSArray, NSString, SCFeedItem;

@interface SCFeedQuickAddCarouselCellViewModel : NSObject <SCFeedCellViewModel, NSCopying>
{
    NSArray *_viewModels;
}

@property(readonly, copy, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewModels:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (_Bool)shouldDisableFeedSwiping;
- (_Bool)isGroupConversation;
- (_Bool)hasUnreadMessages;
- (_Bool)hasFailedMessages;
- (double)height;
- (id)identifier;
- (id)reusableCellIdentifier;
@property(readonly, nonatomic) SCFeedItem *feedItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

