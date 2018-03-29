//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTCENCBuffer;

@interface SPTCENCSample : NSObject
{
    SPTCENCBuffer *_encrypted;
    SPTCENCBuffer *_keyID;
    SPTCENCBuffer *_iv;
    SPTCENCBuffer *_clearBuffer;
}

@property(readonly, nonatomic) SPTCENCBuffer *clearBuffer; // @synthesize clearBuffer=_clearBuffer;
@property(readonly, nonatomic) SPTCENCBuffer *iv; // @synthesize iv=_iv;
@property(readonly, nonatomic) SPTCENCBuffer *keyID; // @synthesize keyID=_keyID;
@property(readonly, nonatomic) SPTCENCBuffer *encrypted; // @synthesize encrypted=_encrypted;
- (void).cxx_destruct;
- (id)initWithEncryptedData:(id)arg1 keyID:(id)arg2 iv:(id)arg3 clearBuffer:(id)arg4;

@end

