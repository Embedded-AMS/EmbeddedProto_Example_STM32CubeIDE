/*
 *  This file is generated with Embedded Proto, PLEASE DO NOT EDIT!
 *  source: request.proto
 */

// This file is generated. Please do not edit!
#ifndef REQUEST_H
#define REQUEST_H

#include <cstdint>
#include <MessageInterface.h>
#include <WireFormatter.h>
#include <Fields.h>
#include <MessageSizeCalculator.h>
#include <ReadBufferSection.h>
#include <RepeatedFieldFixedSize.h>
#include <FieldStringBytes.h>
#include <Errors.h>
#include <Defines.h>
#include <limits>

// Include external proto definitions

namespace demo {

enum class types : uint32_t
{
  A = 0,
  B = 1
};

class request final: public ::EmbeddedProto::MessageInterface
{
  public:
    request() = default;
    request(const request& rhs )
    {
      set_msgId(rhs.get_msgId());
      set_selection(rhs.get_selection());
    }

    request(const request&& rhs ) noexcept
    {
      set_msgId(rhs.get_msgId());
      set_selection(rhs.get_selection());
    }

    ~request() override = default;

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      MSGID = 1,
      SELECTION = 2
    };

    request& operator=(const request& rhs)
    {
      set_msgId(rhs.get_msgId());
      set_selection(rhs.get_selection());
      return *this;
    }

    request& operator=(const request&& rhs) noexcept
    {
      set_msgId(rhs.get_msgId());
      set_selection(rhs.get_selection());
      return *this;
    }

    static constexpr char const* MSGID_NAME = "msgId";
    inline void clear_msgId() { msgId_.clear(); }
    inline void set_msgId(const uint32_t& value) { msgId_ = value; }
    inline void set_msgId(const uint32_t&& value) { msgId_ = value; }
    inline uint32_t& mutable_msgId() { return msgId_.get(); }
    inline const uint32_t& get_msgId() const { return msgId_.get(); }
    inline uint32_t msgId() const { return msgId_.get(); }

    static constexpr char const* SELECTION_NAME = "selection";
    inline void clear_selection() { selection_.clear(); }
    inline void set_selection(const types& value) { selection_ = value; }
    inline void set_selection(const types&& value) { selection_ = value; }
    inline const types& get_selection() const { return selection_.get(); }
    inline types selection() const { return selection_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != msgId_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = msgId_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MSGID), buffer, false);
      }

      if((static_cast<types>(0) != selection_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = selection_.serialize_with_id(static_cast<uint32_t>(FieldNumber::SELECTION), buffer, false);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<FieldNumber>(id_number);
        switch(id_tag)
        {
          case FieldNumber::MSGID:
            return_value = msgId_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::SELECTION:
            return_value = selection_.deserialize_check_type(buffer, wire_type);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, wire_type);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_msgId();
      clear_selection();

    }

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::MSGID:
          name = MSGID_NAME;
          break;
        case FieldNumber::SELECTION:
          name = SELECTION_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          left_chars.data += n_chars_used;
          left_chars.size -= n_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      left_chars = msgId_.to_string(left_chars, indent_level + 2, MSGID_NAME, true);
      left_chars = selection_.to_string(left_chars, indent_level + 2, SELECTION_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        left_chars.data += n_chars_used;
        left_chars.size -= n_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:


      EmbeddedProto::uint32 msgId_ = 0U;
      EmbeddedProto::enumeration<types> selection_ = static_cast<types>(0);

};

} // End of namespace demo
#endif // REQUEST_H