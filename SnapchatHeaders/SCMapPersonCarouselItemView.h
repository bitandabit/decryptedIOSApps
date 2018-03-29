//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCAvatarViewDelegate-Protocol.h"
#import "SCFeedManagerListener-Protocol.h"
#import "SCFriendLocationsListener-Protocol.h"
#import "SCTimeProfilable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SCAvatarView, SCMapPerson, SCUserSession, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol SCMapPersonCarouselItemViewDelegate;

@interface SCMapPersonCarouselItemView : UIView <SCTimeProfilable, SCFriendLocationsListener, UIGestureRecognizerDelegate, SCFeedManagerListener, SCAvatarViewDelegate>
{
    UIView *_containerView;
    SCAvatarView *_avatarView;
    UILabel *_nameLabel;
    UIImageView *_settingsIconView;
    UIImageView *_unreadChatIconView;
    UILabel *_descriptionLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSArray *_recentItems;
    id <SCMapPersonCarouselItemViewDelegate> _delegate;
    SCMapPerson *_person;
    SCUserSession *_userSession;
}

+ (int)context;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) SCAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) SCMapPerson *person; // @synthesize person=_person;
@property(nonatomic) __weak id <SCMapPersonCarouselItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)friendLocationsDidChange:(id)arg1 affectedUserIds:(id)arg2;
- (void)handleLongPressOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnStoryIconFromAvatarView:(id)arg1;
- (void)handleTapOnBitmojiFromAvatarView:(id)arg1;
- (void)_didLongPress:(id)arg1;
- (void)_didTap:(id)arg1;
- (id)_descriptionForFriendLocation:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)_rebuildUI;
- (void)setPerson:(id)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
- (void)didFeedManagerViewModelChange:(id)arg1;
- (void)_onChatUpdate:(id)arg1;
- (void)_onFriendsDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

