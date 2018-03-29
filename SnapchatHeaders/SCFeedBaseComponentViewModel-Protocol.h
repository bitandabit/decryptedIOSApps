//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSDate, NSSet, NSString, SCAvatarViewConfiguration, SCAvatarViewModel, SCFriendsFeedIcon, UIColor;

@protocol SCFeedBaseComponentViewModel <NSObject>
- (SCAvatarViewModel *)avatarViewModel;
- (SCFriendsFeedIcon *)feedIcon;
- (SCAvatarViewConfiguration *)avatarViewConfigurationWithReplayIdentifiers:(NSSet *)arg1;
- (NSDate *)latestPostedStoryTimestamp;
- (_Bool)hasUnviewedStories;
- (long long)type;
- (_Bool)failedToSend;
- (UIColor *)activityIndicatorColor;
- (_Bool)shouldShowActivityIndicator;
- (_Bool)hasUnreadChatsOrUnopenSnaps;
- (NSString *)sender;
- (NSString *)substringToTruncateInSubLabel;
- (NSAttributedString *)attributedSublabelText;
- (NSString *)subLabelText;
- (NSAttributedString *)displayNameAttributedStringWithWidth:(double)arg1;
- (NSString *)identifier;
@end

