//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCPassKitPKAddPasseViewController-Protocol.h"
#import "SCPassKitPKPass-Protocol.h"

@class NSString;

@interface SCPassKitHandler : NSObject <SCPassKitPKPass, SCPassKitPKAddPasseViewController>
{
}

+ (id)_passKitUIBundle;
+ (id)_passKitCoreBundle;
+ (void)_createPassKitHandler;
+ (Class)_loadClassFromBundle:(id)arg1 className:(id)arg2;
+ (Class)_loadClassFromPassKitUILibrary:(id)arg1;
+ (Class)_loadClassFromPassKitCoreLibrary:(id)arg1;
+ (id)shared;
- (void)PKAddPassesViewController:(id)arg1 setDelegate:(id)arg2;
- (id)initWithPass:(id)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

