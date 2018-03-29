//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, SCSessionRequestManager, SCUserSession, SOJUUnlockablesOndemandMobileAuthTokenWrapper;

@interface SCOnDemandGeofilterAuthToken : NSObject
{
    SCUserSession *_userSession;
    SCSessionRequestManager *_sessionRequestManager;
    SOJUUnlockablesOndemandMobileAuthTokenWrapper *_token;
    NSNumber *_authTokenStartTime;
}

- (void).cxx_destruct;
- (_Bool)_checkIfTokenWillExpireSoon:(id)arg1;
- (_Bool)_checkIfTokenValid:(id)arg1;
- (id)_tokenFromCache;
- (void)_cacheAccessToken:(id)arg1;
- (id)tokenString;
- (void)fetchTokenWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;

@end

