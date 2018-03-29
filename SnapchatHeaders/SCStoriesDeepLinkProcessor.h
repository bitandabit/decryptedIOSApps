//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCDeepLinkProcessor-Protocol.h"

@class FriendStoriesCollection, NSString;
@protocol NavigationDelegate;

@interface SCStoriesDeepLinkProcessor : NSObject <SCDeepLinkProcessor>
{
    id <NavigationDelegate> _navigationDelegate;
    FriendStoriesCollection *_friendStoriesCollection;
}

+ (void)resolveStoriesURL:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) FriendStoriesCollection *friendStoriesCollection; // @synthesize friendStoriesCollection=_friendStoriesCollection;
- (void).cxx_destruct;
- (void)_handleOpenURLForLiveFeature:(id)arg1 additionalInfo:(id)arg2;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
