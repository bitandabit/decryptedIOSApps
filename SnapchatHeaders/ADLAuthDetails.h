//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ADLAuthDetails : NSObject
{
    long long _userId;
    long long _expires;
    NSString *_salt;
    NSString *_signature;
    NSString *_token;
    NSString *_mac;
}

+ (id)AuthDetailsWithUserId:(long long)arg1 expires:(long long)arg2 salt:(id)arg3 signature:(id)arg4 token:(id)arg5 mac:(id)arg6;
@property(readonly, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSString *salt; // @synthesize salt=_salt;
@property(readonly, nonatomic) long long expires; // @synthesize expires=_expires;
@property(readonly, nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUserId:(long long)arg1 expires:(long long)arg2 salt:(id)arg3 signature:(id)arg4 token:(id)arg5 mac:(id)arg6;

@end

