//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class Friend, NSArray, NSString, SCOurStoryContentReplacement, SCReplyParameters, SCSelectRecipientsConfiguration, SCUserSession;
@protocol SCSendViewControllerNavigationDelegate, SCSendViewControllerSendingDelegate, SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@interface SCSendToConfiguration : NSObject
{
    unsigned long long _unidirectionFriendsCount;
    _Bool _isNewOrHighRiskUser;
    _Bool _allowAddFriendsInSearch;
    _Bool _isOpenedFromMemoriesTabInChatDrawer;
    _Bool _gallerySendingLongVideo;
    _Bool _isMultiSnap;
    _Bool _isSnappablesSnap;
    _Bool _allAreLagunaSnapsWithin24h;
    _Bool _hideAddFriendsButton;
    _Bool _showsAddDuplicatePromptForMyStory;
    SCUserSession *_userSession;
    id <SCSendViewControllerSendingDelegate> _sendingDelegate;
    id <SendSnapNavigationControllerDelegate> _delegate;
    id <SCSendViewControllerNavigationDelegate> _navigationDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    Friend *_replyFriend;
    long long _snapSource;
    NSString *_pageType;
    NSArray *_snappableFriends;
    NSString *_captureSessionId;
    SCOurStoryContentReplacement *_ourStoryContentReplacement;
    SCReplyParameters *_replyParameters;
    SCSelectRecipientsConfiguration *_recipientsConfiguration;
    long long _statusBarStyle;
}

@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool showsAddDuplicatePromptForMyStory; // @synthesize showsAddDuplicatePromptForMyStory=_showsAddDuplicatePromptForMyStory;
@property(nonatomic) _Bool hideAddFriendsButton; // @synthesize hideAddFriendsButton=_hideAddFriendsButton;
@property(nonatomic) _Bool allAreLagunaSnapsWithin24h; // @synthesize allAreLagunaSnapsWithin24h=_allAreLagunaSnapsWithin24h;
@property(retain, nonatomic) SCSelectRecipientsConfiguration *recipientsConfiguration; // @synthesize recipientsConfiguration=_recipientsConfiguration;
@property(retain, nonatomic) SCReplyParameters *replyParameters; // @synthesize replyParameters=_replyParameters;
@property(copy, nonatomic) SCOurStoryContentReplacement *ourStoryContentReplacement; // @synthesize ourStoryContentReplacement=_ourStoryContentReplacement;
@property(copy, nonatomic) NSString *captureSessionId; // @synthesize captureSessionId=_captureSessionId;
@property(copy, nonatomic) NSArray *snappableFriends; // @synthesize snappableFriends=_snappableFriends;
@property(nonatomic) _Bool isSnappablesSnap; // @synthesize isSnappablesSnap=_isSnappablesSnap;
@property(nonatomic) _Bool isMultiSnap; // @synthesize isMultiSnap=_isMultiSnap;
@property(nonatomic) _Bool gallerySendingLongVideo; // @synthesize gallerySendingLongVideo=_gallerySendingLongVideo;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(nonatomic) _Bool isOpenedFromMemoriesTabInChatDrawer; // @synthesize isOpenedFromMemoriesTabInChatDrawer=_isOpenedFromMemoriesTabInChatDrawer;
@property(nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
@property(retain, nonatomic) Friend *replyFriend; // @synthesize replyFriend=_replyFriend;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SCSendViewControllerNavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCSendViewControllerSendingDelegate> sendingDelegate; // @synthesize sendingDelegate=_sendingDelegate;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (_Bool)isNewUserSendTo;
- (_Bool)allowAddFriendsInSearch;
- (_Bool)shouldDisplayAllFriendsAboveGroup;
- (_Bool)shouldDisplayQuickAddFriendsSection;
- (_Bool)shouldDisplayAllFriendsSection;
- (_Bool)shouldDisplayChatGroupSection;
- (_Bool)shouldDisplayRecentsAndSuggestedSection;
- (_Bool)shouldDisplayBestFriendsSection;
- (_Bool)shouldDisplayStorySection;
- (id)initForGroupStoriesWithUserSession:(id)arg1 navigationDelegate:(id)arg2;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 sendingDelegate:(id)arg3 navigationDelegate:(id)arg4;

@end

