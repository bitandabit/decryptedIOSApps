//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class A9VSAuthentication;

@interface ACSRecognizer : NSObject
{
    A9VSAuthentication *_authenticator;
}

@property(retain, nonatomic) A9VSAuthentication *authenticator; // @synthesize authenticator=_authenticator;
- (void).cxx_destruct;
- (id)recognizeForBarcode:(id)arg1 username:(id)arg2;
- (id)recognizeForImage:(id)arg1 username:(id)arg2;

@end

