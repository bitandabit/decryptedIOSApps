//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class SPTSerializableCredentials;

@interface SPTKeychainCredentials : NSObject <NSCoding>
{
    SPTSerializableCredentials *_credentials;
}

@property(retain, nonatomic) SPTSerializableCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createLoginCredentials;
- (id)initWithCredentials:(id)arg1;

@end
