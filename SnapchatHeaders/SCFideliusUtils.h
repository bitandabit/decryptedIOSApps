//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCFideliusUtils : NSObject
{
}

+ (_Bool)randomEventSampling:(double)arg1;
+ (id)applicationSupportDirectory;
+ (id)deviceDatabaseFolderURLWithVersion:(unsigned long long)arg1;
+ (id)userDatabaseFolderURLWithVersion:(unsigned long long)arg1;
+ (id)initWithBase64EncodedString:(id)arg1 source:(id)arg2;
+ (void)setRecipientFideliusReady:(id)arg1;
+ (_Bool)shouldSuppressDiskSnap:(id)arg1 useFakePerformer:(_Bool)arg2;
+ (_Bool)shouldSuppress:(id)arg1 source:(id)arg2;
+ (id)inversePhi:(id)arg1 recipientUserId:(id)arg2 senderOutBeta:(id)arg3 version:(long long)arg4 device:(id)arg5 cache:(id)arg6 myBeta:(id)arg7 logger:(id)arg8 error:(id *)arg9;
+ (id)dataToDeriveKeyForOtherUserId:(id)arg1 ourUserId:(id)arg2 mystique:(id)arg3 version:(id)arg4 outgoing:(_Bool)arg5 type:(id)arg6;
+ (id)createRandomTestFriends:(long long)arg1;
+ (id)handshakeForFriend:(id)arg1 device:(id)arg2 myBeta:(id)arg3 logger:(id)arg4;
+ (id)safeJSONSerialization:(id)arg1;
+ (void)makeRequest:(id)arg1 endpoint:(id)arg2 session:(id)arg3 queue:(id)arg4 requestParser:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (id)appendUtf8String:(id)arg1 toData:(id)arg2;
+ (id)createInitPackage:(id)arg1 hashedBetas:(id)arg2;
+ (id)createTempDeviceInfo;
+ (id)generateInOut;
+ (id)cryptoWithUncompressedPublicKeyBase64:(id)arg1 hasHeader:(_Bool)arg2;
+ (id)removeFideliusHeader:(id)arg1;
+ (id)addFideliusHeader:(id)arg1;
+ (id)hmacTag:(id)arg1 forKey:(id)arg2;
+ (id)expandDerived:(id)arg1 info:(id)arg2 size:(int)arg3;
+ (id)hmacDerivation:(id)arg1 forMessage:(id)arg2;
+ (id)keyDerivationForKey:(id)arg1 salt:(id)arg2;

@end

