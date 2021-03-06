//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface SCSnapchatAdsPersistentData : NSObject
{
    NSString *_encryptedUserData;
    NSString *_userSecId;
    NSDictionary *_adSourceConfig;
    NSString *_adSessionId;
    NSString *_userPixelToken;
}

+ (id)shared;
@property(copy, nonatomic) NSString *userPixelToken; // @synthesize userPixelToken=_userPixelToken;
@property(copy, nonatomic) NSString *adSessionId; // @synthesize adSessionId=_adSessionId;
@property(retain, nonatomic) NSDictionary *adSourceConfig; // @synthesize adSourceConfig=_adSourceConfig;
@property(copy, nonatomic) NSString *userSecId; // @synthesize userSecId=_userSecId;
@property(copy, nonatomic) NSString *encryptedUserData; // @synthesize encryptedUserData=_encryptedUserData;
- (void).cxx_destruct;
- (void)removeState;
- (void)resetToDefault;
- (id)init;

@end

