//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, SOJUIdentityRegistrationV2ErrorResponse, SOJULoginResponse;

@interface SCRegisterResponse : NSObject
{
    _Bool _success;
    SOJULoginResponse *_successResponse;
    NSString *_errorTitle;
    SOJUIdentityRegistrationV2ErrorResponse *_failureResponse;
}

@property(retain, nonatomic) SOJUIdentityRegistrationV2ErrorResponse *failureResponse; // @synthesize failureResponse=_failureResponse;
@property(retain, nonatomic) NSString *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(retain, nonatomic) SOJULoginResponse *successResponse; // @synthesize successResponse=_successResponse;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end
