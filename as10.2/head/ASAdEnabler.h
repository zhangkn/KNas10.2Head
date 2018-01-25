//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADAdEnablingTester-Protocol.h"

@class ASAdFrequencyCapper, ASAdHeaderInjector, ASAdTargetingUpdater, NSString, SSAccountStore;
@protocol ADAdEnablingTester;

@interface ASAdEnabler : NSObject <ADAdEnablingTester>
{
    _Bool _adsEnabled;
    SSAccountStore *_accountStore;
    ASAdFrequencyCapper *_frequencyCapper;
    ASAdTargetingUpdater *_targetingUpdater;
    ASAdHeaderInjector *_headerInjector;
    id <ADAdEnablingTester> _tester;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <ADAdEnablingTester> tester; // @synthesize tester=_tester;
@property(retain, nonatomic) ASAdHeaderInjector *headerInjector; // @synthesize headerInjector=_headerInjector;
@property(retain, nonatomic) ASAdTargetingUpdater *targetingUpdater; // @synthesize targetingUpdater=_targetingUpdater;
@property(retain, nonatomic) ASAdFrequencyCapper *frequencyCapper; // @synthesize frequencyCapper=_frequencyCapper;
@property(nonatomic, getter=isAdsEnabled) _Bool adsEnabled; // @synthesize adsEnabled=_adsEnabled;
@property(retain, nonatomic) SSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void).cxx_destruct;
- (_Bool)isAdsEnabledForStorefront;
- (_Bool)isManagedAppleID;
- (void)_storefrontChanged:(id)arg1;
- (void)_accountStoreChanged:(id)arg1;
- (void)shouldEnableAds:(CDUnknownBlockType)arg1;
- (void)enableAdsIfSupported;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

