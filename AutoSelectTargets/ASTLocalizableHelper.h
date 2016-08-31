//
//  LocalizableHelper.h
//  AllTargets
//
//  Created by Francisco Javier Trujillo Mata on 06/08/16.
//  Copyright © 2016 Jobs. All rights reserved.
//

#ifndef ASTLocalizableHelper_h
#define ASTLocalizableHelper_h

#import "AutoSelectTargets.h"

#endif /* ASTLocalizableHelper_h */

#define ASTLocalizedString(key, comment) \
[[AutoSelectTargets sharedPlugin].bundle localizedStringForKey:(key) value:@"" table:nil]
