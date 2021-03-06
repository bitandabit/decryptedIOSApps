//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCDeepLinkProcessor-Protocol.h"

@class NSString;
@protocol NavigationDelegate;

@interface SCContentInviteDeepLinkProcessor : NSObject <SCDeepLinkProcessor>
{
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (_Bool)_isValidContentLinkId:(id)arg1;
- (_Bool)_isValidUsername:(id)arg1;
- (id)_getContentLinkId:(id)arg1;
- (id)alertTitleForLogoutUser;
- (_Bool)processDeepLinkResponse:(id)arg1 userSession:(id)arg2;
- (id)getDeepLinkRequest:(id)arg1;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 additionalInfo:(id)arg3;
- (id)initWithNavigationDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

